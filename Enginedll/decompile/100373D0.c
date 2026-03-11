/*
 * func-name: sub_100373D0
 * func-address: 0x100373d0
 * callers: 0x100384a0
 * callees: 0x100116a0, 0x1003be70, 0x100492d0, 0x100497b0, 0x10049860, 0x10049910, 0x1004a5e0, 0x1004a6e0
 */

char __thiscall sub_100373D0(char *this, char *a2, char *a3)
{
  XMLSystem *v4; // edi
  char *FirstNode; // eax
  char *v6; // ebp
  char *v7; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  unsigned int v12; // ebx
  int (__thiscall *v13)(int); // eax
  int v14; // eax
  int v15; // eax
  void *String; // eax
  int v17; // eax
  int v18; // eax
  int v19; // esi
  unsigned int v20; // ebx
  int (__thiscall *v21)(int); // eax
  int v22; // eax
  int v23; // eax
  void *v24; // eax
  int v25; // esi
  int (__thiscall *v26)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v27; // eax
  int (__thiscall *v28)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v29; // eax
  int (__thiscall *v30)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v31; // eax
  int (__thiscall *v32)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v33; // eax
  int (__thiscall *v34)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v35; // eax
  int (__thiscall *v36)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v37; // eax
  int (__thiscall *v38)(int, const wchar_t *); // eax
  int v39; // eax
  _DWORD *FloatColor; // eax
  int (__thiscall *v41)(int, const wchar_t *); // eax
  int v42; // eax
  _DWORD *v43; // eax
  int (__thiscall *v44)(int, const wchar_t *); // eax
  int v45; // eax
  _DWORD *v46; // eax
  int (__thiscall *v47)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v48; // eax
  int (__thiscall *v49)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v50; // eax
  int (__thiscall *v51)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v52; // eax
  int (__thiscall *v53)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v54; // eax
  int (__thiscall *v55)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v56; // eax
  int (__thiscall *v57)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v58; // eax
  int (__thiscall *v59)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v60; // eax
  int (__thiscall *v61)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v62; // eax
  int (__thiscall *v63)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v64; // eax
  int (__thiscall *v65)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v66; // eax
  int (__thiscall *v67)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v68; // eax
  int (__thiscall *v69)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v70; // eax
  int (__thiscall *v71)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v72; // eax
  int (__thiscall *v73)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v74; // eax
  int (__thiscall *v75)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v76; // eax
  int (__thiscall *v77)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v78; // eax
  int (__thiscall *v79)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v80; // eax
  int (__thiscall *v81)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v82; // eax
  int Int; // eax
  int *v84; // eax
  int v85; // edx
  int v86; // eax
  int v87; // eax
  int *v88; // eax
  int v89; // edx
  struct xercesc_2_5::DOMNode *v90; // eax
  char v91[4]; // [esp+5Ch] [ebp-5Ch] BYREF
  int v92; // [esp+60h] [ebp-58h]
  int v93; // [esp+64h] [ebp-54h]
  int v94; // [esp+68h] [ebp-50h]
  int v95; // [esp+6Ch] [ebp-4Ch]
  int v96; // [esp+70h] [ebp-48h]
  BOOL v97; // [esp+74h] [ebp-44h]
  char *v98; // [esp+88h] [ebp-30h]
  char *v99; // [esp+8Ch] [ebp-2Ch]
  _BYTE v100[28]; // [esp+90h] [ebp-28h] BYREF
  int v101; // [esp+B4h] [ebp-4h]

  v99 = v91;
  v98 = this;
  std::string::string(v91, "SphericalHarmonics");
  v4 = (XMLSystem *)(this + 84);
  FirstNode = (char *)XMLSystem::FindFirstNode(a2, v91[0], v92, v93, v94, v95, v96, v97);
  v6 = a3;
  v7 = FirstNode;
  a2 = FirstNode;
  *a3 = 0;
  if ( !FirstNode )
    return 0;
  a3 = v91;
  *v6 = 1;
  std::string::string(v91, "InBlockers");
  v9 = XMLSystem::FindFirstNode(v7, v91[0], v92, v93, v94, v95, v96, v97);
  v10 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v9 + 168))(v9, L"Blocker");
  v11 = v10;
  if ( v10 )
  {
    v12 = 0;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10) )
    {
      do
      {
        v13 = *(int (__thiscall **)(int))(*(_DWORD *)v11 + 4);
        v97 = v12;
        v14 = v13(v11);
        v15 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v14 + 164))(v14, L"Name", 0);
        String = (void *)XMLSystem::GetString(v100, v15, v97);
        v101 = 0;
        sub_100116A0(v6 + 2231, String);
        v101 = -1;
        std::string::~string(v100);
        ++v12;
      }
      while ( v12 < (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11) );
    }
    v7 = a2;
  }
  a3 = v91;
  std::string::string(v91, "OutBlockers");
  v17 = XMLSystem::FindFirstNode(v7, v91[0], v92, v93, v94, v95, v96, v97);
  v18 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v17 + 168))(v17, L"Blocker");
  v19 = v18;
  if ( v18 )
  {
    v20 = 0;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 8))(v18) )
    {
      do
      {
        v21 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 4);
        v97 = v20;
        v22 = v21(v19);
        v23 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v22 + 164))(v22, L"Name", 0);
        v24 = (void *)XMLSystem::GetString(v100, v23, v97);
        v101 = 1;
        sub_100116A0(v6 + 2247, v24);
        v101 = -1;
        std::string::~string(v100);
        ++v20;
      }
      while ( v20 < (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19) );
    }
    v7 = a2;
  }
  a2 = v91;
  std::string::string(v91, "Settings");
  v25 = XMLSystem::FindFirstNode(v7, v91[0], v92, v93, v94, v95, v96, v97);
  v26 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v27 = (struct xercesc_2_5::DOMNode *)v26(v25, L"NumRays");
  *(_DWORD *)(v6 + 1561) = XMLSystem::GetInt(v4, v27, v97);
  v28 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v29 = (struct xercesc_2_5::DOMNode *)v28(v25, L"Order");
  *(_DWORD *)(v6 + 1565) = XMLSystem::GetInt(v4, v29, v97);
  v30 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v31 = (struct xercesc_2_5::DOMNode *)v30(v25, L"NumChannels");
  *(_DWORD *)(v6 + 1569) = XMLSystem::GetInt(v4, v31, v97);
  v32 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v33 = (struct xercesc_2_5::DOMNode *)v32(v25, L"NumBounces");
  *(_DWORD *)(v6 + 1573) = XMLSystem::GetInt(v4, v33, v97);
  v34 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v35 = (struct xercesc_2_5::DOMNode *)v34(v25, L"SubsurfaceScattering");
  v6[1577] = XMLSystem::GetBool(v4, v35, v97);
  v36 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v37 = (struct xercesc_2_5::DOMNode *)v36(v25, L"LengthScale");
  *(float *)(v6 + 1578) = XMLSystem::GetFloat(v4, v37, v97);
  v38 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v39 = v38(v25, L"Diffuse");
  FloatColor = (_DWORD *)XMLSystem::GetFloatColor(v4, v100, v39, v97);
  *(_DWORD *)(v6 + 1587) = *FloatColor;
  *(_DWORD *)(v6 + 1591) = FloatColor[1];
  *(_DWORD *)(v6 + 1595) = FloatColor[2];
  *(_DWORD *)(v6 + 1599) = FloatColor[3];
  v41 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v42 = v41(v25, L"Absoption");
  v43 = (_DWORD *)XMLSystem::GetFloatColor(v4, v100, v42, v97);
  *(_DWORD *)(v6 + 1603) = *v43;
  *(_DWORD *)(v6 + 1607) = v43[1];
  *(_DWORD *)(v6 + 1611) = v43[2];
  *(_DWORD *)(v6 + 1615) = v43[3];
  v44 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v45 = v44(v25, L"ReducedScattering");
  v46 = (_DWORD *)XMLSystem::GetFloatColor(v4, v100, v45, v97);
  *(_DWORD *)(v6 + 1619) = *v46;
  *(_DWORD *)(v6 + 1623) = v46[1];
  *(_DWORD *)(v6 + 1627) = v46[2];
  *(_DWORD *)(v6 + 1631) = v46[3];
  v47 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v48 = (struct xercesc_2_5::DOMNode *)v47(v25, L"RelativeIndexOfRefraction");
  *(float *)(v6 + 1635) = XMLSystem::GetFloat(v4, v48, v97);
  v49 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v50 = (struct xercesc_2_5::DOMNode *)v49(v25, L"PredefinedMatIndex");
  *(_DWORD *)(v6 + 1583) = XMLSystem::GetInt(v4, v50, v97);
  v51 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v52 = (struct xercesc_2_5::DOMNode *)v51(v25, L"Adaptive");
  v6[1643] = XMLSystem::GetBool(v4, v52, v97);
  v53 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v54 = (struct xercesc_2_5::DOMNode *)v53(v25, L"RobustMeshRefine");
  v6[1644] = XMLSystem::GetBool(v4, v54, v97);
  v55 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v56 = (struct xercesc_2_5::DOMNode *)v55(v25, L"RobustMeshRefineMinEdgeLength");
  *(float *)(v6 + 1645) = XMLSystem::GetFloat(v4, v56, v97);
  v57 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v58 = (struct xercesc_2_5::DOMNode *)v57(v25, L"RobustMeshRefineMaxSubdiv");
  *(_DWORD *)(v6 + 1649) = XMLSystem::GetInt(v4, v58, v97);
  v59 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v60 = (struct xercesc_2_5::DOMNode *)v59(v25, L"AdaptiveDL");
  v6[1653] = XMLSystem::GetBool(v4, v60, v97);
  v61 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v62 = (struct xercesc_2_5::DOMNode *)v61(v25, L"AdaptiveDLMinEdgeLength");
  *(float *)(v6 + 1654) = XMLSystem::GetFloat(v4, v62, v97);
  v63 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v64 = (struct xercesc_2_5::DOMNode *)v63(v25, L"AdaptiveDLThreshold");
  *(float *)(v6 + 1658) = XMLSystem::GetFloat(v4, v64, v97);
  v65 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v66 = (struct xercesc_2_5::DOMNode *)v65(v25, L"AdaptiveDLMaxSubdiv");
  *(_DWORD *)(v6 + 1662) = XMLSystem::GetInt(v4, v66, v97);
  v67 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v68 = (struct xercesc_2_5::DOMNode *)v67(v25, L"AdaptiveBounce");
  v6[1666] = XMLSystem::GetBool(v4, v68, v97);
  v69 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v70 = (struct xercesc_2_5::DOMNode *)v69(v25, L"AdaptiveBounceMinEdgeLength");
  *(float *)(v6 + 1667) = XMLSystem::GetFloat(v4, v70, v97);
  v71 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v72 = (struct xercesc_2_5::DOMNode *)v71(v25, L"AdaptiveBounceThreshold");
  *(float *)(v6 + 1671) = XMLSystem::GetFloat(v4, v72, v97);
  v73 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v74 = (struct xercesc_2_5::DOMNode *)v73(v25, L"AdaptiveBounceMaxSubdiv");
  *(_DWORD *)(v6 + 1675) = XMLSystem::GetInt(v4, v74, v97);
  v75 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v76 = (struct xercesc_2_5::DOMNode *)v75(v25, L"NumClusters");
  *(_DWORD *)(v6 + 2202) = XMLSystem::GetInt(v4, v76, v97);
  v77 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v78 = (struct xercesc_2_5::DOMNode *)v77(v25, L"NumPCA");
  *(_DWORD *)(v6 + 2206) = XMLSystem::GetInt(v4, v78, v97);
  v79 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v80 = (struct xercesc_2_5::DOMNode *)v79(v25, L"PerPixel");
  v6[2210] = XMLSystem::GetBool(v4, v80, v97);
  v81 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v25 + 164);
  v97 = 0;
  v82 = (struct xercesc_2_5::DOMNode *)v81(v25, L"TextureSize");
  Int = XMLSystem::GetInt(v4, v82, v97);
  a2 = v91;
  *(_DWORD *)(v6 + 2211) = Int;
  std::string::string(v91, "File");
  v84 = (int *)XMLSystem::FindFirstNode(v7, v91[0], v92, v93, v94, v95, v96, v97);
  if ( v84 )
  {
    v85 = *v84;
    v97 = 0;
    v86 = (*(int (__thiscall **)(int *, const wchar_t *))(v85 + 164))(v84, L"PRTFile");
    v87 = XMLSystem::GetString(v100, v86, v97);
    v101 = 2;
    std::string::operator=(v6 + 2263, v87);
    v101 = -1;
    std::string::~string(v100);
    if ( (unsigned __int8)std::operator!=<char>(v6 + 2263, &unk_101BBDAB) )
    {
      a2 = v6 + 2263;
      sub_1003BE70((int)(v98 + 12), (int)&a2);
    }
  }
  else
  {
    std::string::operator=(v6 + 2263, &unk_101BBDC3);
  }
  a2 = v91;
  std::string::string(v91, "Enabled");
  v88 = (int *)XMLSystem::FindFirstNode(v7, v91[0], v92, v93, v94, v95, v96, v97);
  if ( v88 )
  {
    v89 = *v88;
    v97 = 0;
    v90 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int *, const wchar_t *))(v89 + 164))(v88, L"PRTEnabled");
    *v6 = XMLSystem::GetBool(v4, v90, v97);
  }
  return 1;
}
