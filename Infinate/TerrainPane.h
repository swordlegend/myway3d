//////////////////////////////////////////////////////////////////////////
//
// Infinite. Scene Editor For Myway3D
//   
//	 author: Myway
//	 e-mail: Myway3D@Gmail.com
//
//
//
#pragma once

#include "BaseLayout.h"
#include "xEditTerrainHeight.h"
#include "xEditTerrainLayer.h"
#include "xEditTerrainVeg.h"
#include "TerrainHeightDlg.h"
#include "TerrainLayerDlg.h"
#include "TerrainVegDlg.h"

namespace Infinite {

	class TerrainPane : public wraps::BaseLayout
	{
		DECLARE_SINGLETON(TerrainPane);

	public:
		TerrainPane(MyGUI::Widget * _parent);
		virtual ~TerrainPane();

		TerrainHeightDlg * GetTerrainHeightDlg() { return mHeightDlg; }
		TerrainLayerDlg * GetTerrainLayerDlg() { return mLayerDlg; }
		TerrainVegDlg * GetTerrainVegDlg() { return mVegDlg; }

		xEditTerrainHeight * GetTerrainHeight() { return &mEditHeight; }
		xEditTerrainLayer * GetTerrainLayer() { return &mEditLayer; }
		xEditTerrainVeg * GetTerrainVeg() { return &mEditVeg; }

	protected:
		void _Init(Event * sender);
		void _Shutdown(Event * sender);
		void _Update(Event * sender);
		void _Render(Event * sender);
		void _RenderUI(Event * sender);
		void _UnloadScene(Event * sender);
		void _AfterloadScene(Event * sender);

	protected:
		tEventListener<TerrainPane> OnInit;
		tEventListener<TerrainPane> OnShutdown;
		tEventListener<TerrainPane> OnUpdate;
		tEventListener<TerrainPane> OnRender;
		tEventListener<TerrainPane> OnRenderUI;
		tEventListener<TerrainPane> OnUnLoadScene;
		tEventListener<TerrainPane> OnAfterLoadScene;

		xEditTerrainHeight mEditHeight;
		xEditTerrainLayer mEditLayer;
		xEditTerrainVeg mEditVeg;

		MyGUI::TabControl * mTabControl;
		TerrainHeightDlg * mHeightDlg;
		TerrainLayerDlg * mLayerDlg;
		TerrainVegDlg * mVegDlg;
	};
}