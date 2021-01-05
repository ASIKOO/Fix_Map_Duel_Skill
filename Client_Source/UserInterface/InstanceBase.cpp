//In bool CInstanceBase::CanUseSkill() search:

	return true;
	
//Add above:

#ifdef ENABLE_FIX_MAP_DUEL_SKILL
	CPythonBackground& rkBG = CPythonBackground::Instance();
	const D3DXVECTOR3& rv3Position = m_GraphicThingInstance.GetPosition();
	D3DXVECTOR3 v3CheckPosition = rv3Position;
	std::string stringMapName = CPythonBackground::Instance().GetWarpMapName();

	if (stringMapName == "metin2_map_duel")
	{
		if (rkBG.isAttrOn(v3CheckPosition.x, -v3CheckPosition.y, CTerrainImpl::ATTRIBUTE_BANPK))
			return false;
	}
#endif
