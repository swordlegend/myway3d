#include "MWColorSharp.h"
#include "MWEnvironment.h"
#include "MWRenderHelper.h"
#include "MWKeyboard.h"

namespace Myway {

    ColorSharp::ColorSharp()
    {
        mTech = Environment::Instance()->GetShaderLib()->GetTechnique("ColorSharp");
        d_assert (mTech);
    }

    ColorSharp::~ColorSharp()
    {
    }

    void ColorSharp::Render(Texture * tex)
    {
		static bool btest = true;

		if (IKeyboard::Instance()->KeyUp(KC_5))
			btest = !btest;

		if (!btest)
			return ;

		RenderSystem::Instance()->_BeginEvent("ColorSharp");

        float colorSharpScale = Environment::Instance()->GetEvParam()->ColorSharpScale;

        ShaderParam * uSharpParam = mTech->GetPixelShaderParamTable()->GetParam("gSharpParam");

        uSharpParam->SetUnifom(colorSharpScale, 0, 0, 0);

        SamplerState state;
        state.Address = TEXA_CLAMP;
        state.Filter = TEXF_POINT;

        RenderSystem::Instance()->SetTexture(0, state, tex);

        RenderHelper::Instance()->DrawScreenQuad(BM_OPATICY, mTech);

		RenderSystem::Instance()->_EndEvent();
    }
}