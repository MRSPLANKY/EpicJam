// "Ninja Character" plugin, by Javier 'Xaklse' Osset; Copyright 2020


#pragma once


#include "Math/UnrealMathUtility.h"
#include "Math/Matrix.h"
#include "Math/Quat.h"
#include "Math/Vector.h"


/**
 * Offers complementary math helper functions.
 */
struct FNinjaMath
{
	/**
	 * Gets the forward direction (X axis) rotated by a quaternion.
	 * @param Quat - the quaternion from which to extract the direction
	 * @return X rotation axis from given quaternion
	 */
	static FORCEINLINE FVector GetAxisX(const FQuat& Quat)
	{
		// Code taken from FQuatRotationTranslationMatrix::FQuatRotationTranslationMatrix

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) && WITH_EDITORONLY_DATA
		check(Quat.IsNormalized());
#endif

		const float Y2 = Quat.Y * 2.0f;
		const float Z2 = Quat.Z * 2.0f;

		return FVector(1.0f - (Quat.Y * Y2 + Quat.Z * Z2),
			Quat.X * Y2 + Quat.W * Z2, Quat.X * Z2 - Quat.W * Y2);
	}

	/**
	 * Gets the right direction (Y axis) rotated by a quaternion.
	 * @param Quat - the quaternion from which to extract the direction
	 * @return Y rotation axis from given quaternion
	 */
	static FORCEINLINE FVector GetAxisY(const FQuat& Quat)
	{
		// Code taken from FQuatRotationTranslationMatrix::FQuatRotationTranslationMatrix

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) && WITH_EDITORONLY_DATA
		check(Quat.IsNormalized());
#endif

		const float X2 = Quat.X * 2.0f;
		const float Y2 = Quat.Y * 2.0f;
		const float Z2 = Quat.Z * 2.0f;

		return FVector(Quat.X * Y2 - Quat.W * Z2,
			1.0f - (Quat.X * X2 + Quat.Z * Z2), Quat.Y * Z2 + Quat.W * X2);
	}

	/**
	 * Gets the up direction (Z axis) rotated by a quaternion.
	 * @param Quat - the quaternion from which to extract the direction
	 * @return Z rotation axis from given quaternion
	 */
	static FORCEINLINE FVector GetAxisZ(const FQuat& Quat)
	{
		// Code taken from FQuatRotationTranslationMatrix::FQuatRotationTranslationMatrix

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) && WITH_EDITORONLY_DATA
		check(Quat.IsNormalized());
#endif

		const float X2 = Quat.X * 2.0f;
		const float Y2 = Quat.Y * 2.0f;
		const float Z2 = Quat.Z * 2.0f;

		return FVector(Quat.X * Z2 + Quat.W * Y2,
			Quat.Y * Z2 - Quat.W * X2, 1.0f - (Quat.X * X2 + Quat.Y * Y2));
	}

	/**
	 * Builds a matrix with given Z and X axes (X from a quaternion). Z will
	 * remain fixed, X may be changed to enforce orthogonality.
	 * @param ZAxis - fixed Z axis
	 * @param Quat - the quaternion from which to extract X axis (or Y axis)
	 * @return rotation matrix with given Z axis
	 */
	static FMatrix MakeFromZQuat(const FVector& ZAxis, const FQuat& Quat)
	{
		// Code taken from FRotationMatrix::MakeFromZX

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) && WITH_EDITORONLY_DATA
		check(ZAxis.IsNormalized());
		check(Quat.IsNormalized());
#endif

		const FVector NewZ = ZAxis;
		FVector NewX = FNinjaMath::GetAxisX(Quat);
		FVector NewY;

		// Make sure vectors aren't parallel to perform correct cross products
		if (FMath::Abs(NewZ | NewX) < THRESH_NORMALS_ARE_PARALLEL)
		{
			NewY = (NewZ ^ NewX).GetSafeNormal();
			NewX = NewY ^ NewZ;
		}
		else
		{
			NewY = FNinjaMath::GetAxisY(Quat);

			NewX = (NewY ^ NewZ).GetSafeNormal();
			NewY = NewZ ^ NewX;
		}

		return FMatrix(NewX, NewY, NewZ, FVector::ZeroVector);
	}
};
