/*
 * func-name: sub_1003F520
 * func-address: 0x1003f520
 * callers: 0x1003fb30, 0x100431a0
 * callees: 0x1004a170, 0x1004a290, 0x1004a340, 0x1004a380, 0x1004a460, 0x1004a4a0
 */

int __thiscall sub_1003F520(
        int this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct xercesc_2_5::DOMNode *a9,
        struct xercesc_2_5::DOMNode *a10,
        char a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  XMLSystem *v17; // edi
  struct xercesc_2_5::DOMNode *Node; // eax
  struct xercesc_2_5::DOMNode *v19; // esi
  struct xercesc_2_5::DOMNode *v20; // eax
  struct xercesc_2_5::DOMNode *v21; // esi
  int v22; // eax
  unsigned int v23; // ebx
  int i; // ebp
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // ebx
  int j; // ebp
  int v31; // eax
  int v32; // eax
  int v33; // eax
  struct xercesc_2_5::DOMNode *v34; // ebx
  char v36; // [esp-18h] [ebp-40h] BYREF
  int v37; // [esp-14h] [ebp-3Ch]
  int v38; // [esp-10h] [ebp-38h]
  int v39; // [esp-Ch] [ebp-34h]
  int v40; // [esp-8h] [ebp-30h]
  int v41; // [esp-4h] [ebp-2Ch]
  int v42; // [esp+0h] [ebp-28h]
  struct xercesc_2_5::DOMNode *v43; // [esp+4h] [ebp-24h]
  struct xercesc_2_5::DOMNode *v44; // [esp+18h] [ebp-10h]
  int v45; // [esp+24h] [ebp-4h]

  v17 = (XMLSystem *)(this + 96);
  v45 = 1;
  Node = XMLSystem::CreateNode((XMLSystem *)(this + 96), a9, "SphericalHarmonics");
  v43 = 0;
  v19 = Node;
  v44 = (struct xercesc_2_5::DOMNode *)&v36;
  a9 = Node;
  std::string::string(&v36, &a2);
  XMLSystem::Attrib(v17, "ReceiverName", v36, v37, v38, v39, v40, v41, v42, v43);
  v20 = XMLSystem::CreateNode(v17, v19, "InBlockers");
  v21 = a10;
  v44 = v20;
  v22 = *(_DWORD *)((char *)a10 + 2235);
  if ( v22 )
    v22 = (*(_DWORD *)((char *)a10 + 2239) - v22) / 28;
  XMLSystem::Attrib(v17, "Count", v22, 0);
  v23 = 0;
  for ( i = 0; ; i += 28 )
  {
    v25 = *(_DWORD *)((char *)v21 + 2235);
    if ( !v25 || v23 >= (*(_DWORD *)((char *)v21 + 2239) - v25) / 28 )
      break;
    XMLSystem::CreateNode(v17, v44, "Blocker");
    v26 = *(_DWORD *)((char *)v21 + 2235);
    v43 = 0;
    if ( !v26 || v23 >= (*(_DWORD *)((char *)v21 + 2239) - v26) / 28 )
      invalid_parameter_noinfo();
    v27 = i + *(_DWORD *)((char *)v21 + 2235);
    a10 = (struct xercesc_2_5::DOMNode *)&v36;
    std::string::string(&v36, v27);
    XMLSystem::Attrib(v17, "Name", v36, v37, v38, v39, v40, v41, v42, v43);
    ++v23;
  }
  a10 = XMLSystem::CreateNode(v17, a9, "OutBlockers");
  v28 = *(_DWORD *)((char *)v21 + 2251);
  if ( v28 )
    v28 = (*(_DWORD *)((char *)v21 + 2255) - v28) / 28;
  XMLSystem::Attrib(v17, "Count", v28, 0);
  v29 = 0;
  for ( j = 0; ; j += 28 )
  {
    v31 = *(_DWORD *)((char *)v21 + 2251);
    if ( !v31 || v29 >= (*(_DWORD *)((char *)v21 + 2255) - v31) / 28 )
      break;
    XMLSystem::CreateNode(v17, a10, "Blocker");
    v32 = *(_DWORD *)((char *)v21 + 2251);
    v43 = 0;
    if ( !v32 || v29 >= (*(_DWORD *)((char *)v21 + 2255) - v32) / 28 )
      invalid_parameter_noinfo();
    v33 = j + *(_DWORD *)((char *)v21 + 2251);
    v44 = (struct xercesc_2_5::DOMNode *)&v36;
    std::string::string(&v36, v33);
    XMLSystem::Attrib(v17, "Name", v36, v37, v38, v39, v40, v41, v42, v43);
    ++v29;
  }
  v34 = a9;
  XMLSystem::CreateNode(v17, a9, "Settings");
  XMLSystem::Attrib(v17, "NumRays", *(_DWORD *)((char *)v21 + 1561), 0);
  XMLSystem::Attrib(v17, "Order", *(_DWORD *)((char *)v21 + 1565), 0);
  XMLSystem::Attrib(v17, "NumChannels", *(_DWORD *)((char *)v21 + 1569), 0);
  XMLSystem::Attrib(v17, "NumBounces", *(_DWORD *)((char *)v21 + 1573), 0);
  XMLSystem::Attrib(v17, "SubsurfaceScattering", *((_BYTE *)v21 + 1577), 0);
  v43 = 0;
  XMLSystem::Attrib(v17, "LengthScale", *(float *)((char *)v21 + 1578), 0);
  XMLSystem::Attrib(v17, "Diffuse", (struct xercesc_2_5::DOMNode *)((char *)v21 + 1587), 0);
  XMLSystem::Attrib(v17, "Absoption", (struct xercesc_2_5::DOMNode *)((char *)v21 + 1603), 0);
  XMLSystem::Attrib(v17, "ReducedScattering", (struct xercesc_2_5::DOMNode *)((char *)v21 + 1619), 0);
  XMLSystem::Attrib(v17, "RelativeIndexOfRefraction", *(float *)((char *)v21 + 1635), 0);
  XMLSystem::Attrib(v17, "PredefinedMatIndex", *(_DWORD *)((char *)v21 + 1583), 0);
  XMLSystem::Attrib(v17, "Adaptive", *((_BYTE *)v21 + 1643), 0);
  XMLSystem::Attrib(v17, "RobustMeshRefine", *((_BYTE *)v21 + 1644), 0);
  XMLSystem::Attrib(v17, "RobustMeshRefineMinEdgeLength", *(float *)((char *)v21 + 1645), 0);
  XMLSystem::Attrib(v17, "RobustMeshRefineMaxSubdiv", *(_DWORD *)((char *)v21 + 1649), 0);
  XMLSystem::Attrib(v17, "AdaptiveDL", *((_BYTE *)v21 + 1653), 0);
  v43 = 0;
  XMLSystem::Attrib(v17, "AdaptiveDLMinEdgeLength", *(float *)((char *)v21 + 1654), 0);
  XMLSystem::Attrib(v17, "AdaptiveDLThreshold", *(float *)((char *)v21 + 1658), 0);
  XMLSystem::Attrib(v17, "AdaptiveDLMaxSubdiv", *(_DWORD *)((char *)v21 + 1662), 0);
  XMLSystem::Attrib(v17, "AdaptiveBounce", *((_BYTE *)v21 + 1666), 0);
  v43 = 0;
  XMLSystem::Attrib(v17, "AdaptiveBounceMinEdgeLength", *(float *)((char *)v21 + 1667), 0);
  XMLSystem::Attrib(v17, "AdaptiveBounceThreshold", *(float *)((char *)v21 + 1671), 0);
  XMLSystem::Attrib(v17, "AdaptiveBounceMaxSubdiv", *(_DWORD *)((char *)v21 + 1675), 0);
  XMLSystem::Attrib(v17, "NumClusters", *(_DWORD *)((char *)v21 + 2202), 0);
  XMLSystem::Attrib(v17, "NumPCA", *(_DWORD *)((char *)v21 + 2206), 0);
  XMLSystem::Attrib(v17, "PerPixel", *((_BYTE *)v21 + 2210), 0);
  XMLSystem::Attrib(v17, "TextureSize", *(_DWORD *)((char *)v21 + 2211), 0);
  XMLSystem::CreateNode(v17, v34, "File");
  v43 = 0;
  a9 = (struct xercesc_2_5::DOMNode *)&v36;
  std::string::string(&v36, &a11);
  XMLSystem::Attrib(v17, "PRTFile", v36, v37, v38, v39, v40, v41, v42, v43);
  XMLSystem::CreateNode(v17, v34, "Enabled");
  XMLSystem::Attrib(v17, "PRTEnabled", *(_BYTE *)v21, 0);
  LOBYTE(v45) = 0;
  std::string::~string(&a2);
  v45 = -1;
  return std::string::~string(&a11);
}
