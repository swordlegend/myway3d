//////////////////////////////////////////////////////////////////////////
//
// EMotionFX Integration.
//   EMotionFX engine : http://www.mysticgd.com
//   
//	 author: Myway
//	 e-mail: Myway3D@Gmail.com
//
//   this soft is free, no license.
//
//
#pragma once

#include "MActorEntry.h"
#include "MWMover.h"
#include "MActorRes.h"
#include "MMotion.h"

namespace Myway {

	class MACTOR_ENTRY MActor : public Mover
	{
		DECLARE_ALLOC();

	public:
		static const int K_MAX_PART = 32;
		static const int K_MAIN_PART = 0;

	public:
		MActor(const TString128 & name);
		virtual ~MActor();

		void SetPart(int part, MActorResPtr pActor);
		MActorResPtr GetPart(int part);

		virtual void UpdateGeometry();
		virtual void AddRenderQueue(RenderQueue * rq);

		bool PlayMotion(const TString128 & motionName, const MMotion::PlayInfo & info = MMotion::PlayInfo());

		EMotionFX::Actor * _GetMainActor() { return mMainActor; }

		void SetRotationMatrix(const Mat4 & rotMatrix) { mRotationMatrix = rotMatrix; }

	protected:
		void _OnActorLoaded(Event * sender);
		void _OnMainPartBind();
		void _OnUpdateAnimtion();

	protected:
		EMotionFX::Actor * mMainActor;

		MActorResPtr mActorParts[K_MAX_PART];

		Mat4 mRotationMatrix;

		tEventListener<MActor> OnActorLoaded;
	};
}