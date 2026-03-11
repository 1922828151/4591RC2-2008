/*
 * func-name: sub_1003FB30
 * func-address: 0x1003fb30
 * callers: 0x10044770
 * callees: 0x10001370, 0x1003f520, 0x1004a170, 0x1004a290, 0x1004a340, 0x1004a380, 0x1004a460, 0x1004a4a0, 0x1007ec70, 0x10095c40, 0x100971c0, 0x10102130, 0x101374b0, 0x101374f0, 0x10137510, 0x10137540, 0x1017a0b0
 */

int __thiscall sub_1003FB30(int this, struct xercesc_2_5::DOMNode *a2, float **a3)
{
  struct xercesc_2_5::DOMNode *Node; // ebp
  float *v5; // eax
  int v6; // edx
  float *v7; // eax
  float v8; // edx
  float *v9; // eax
  float *v10; // eax
  World *v11; // ecx
  World *v12; // ecx
  World *v13; // ecx
  int v14; // ecx
  float *v15; // edx
  float *v16; // edx
  float *v17; // eax
  float *v18; // edx
  float *v19; // eax
  float *v20; // edx
  float *v21; // eax
  float *v22; // edx
  float *v23; // eax
  float *v24; // edx
  float *v25; // eax
  float *v26; // edx
  float *v27; // eax
  float *v28; // eax
  float *v29; // edx
  float *v30; // eax
  float *v31; // eax
  float *v32; // ecx
  World *v33; // ecx
  struct Editor *v34; // eax
  struct Editor *v35; // eax
  struct Editor *v36; // eax
  char v38; // [esp-38h] [ebp-BCh] BYREF
  int v39; // [esp-34h] [ebp-B8h]
  int v40; // [esp-30h] [ebp-B4h]
  int v41; // [esp-2Ch] [ebp-B0h]
  int v42; // [esp-28h] [ebp-ACh]
  int v43; // [esp-24h] [ebp-A8h]
  int v44; // [esp-20h] [ebp-A4h]
  struct xercesc_2_5::DOMNode *v45; // [esp-1Ch] [ebp-A0h]
  struct xercesc_2_5::DOMNode *v46; // [esp-18h] [ebp-9Ch] BYREF
  int v47; // [esp-14h] [ebp-98h] BYREF
  int v48; // [esp-10h] [ebp-94h]
  int v49; // [esp-Ch] [ebp-90h]
  int v50; // [esp-8h] [ebp-8Ch]
  int v51; // [esp-4h] [ebp-88h]
  float FogDistance; // [esp+0h] [ebp-84h]
  char *v53; // [esp+4h] [ebp-80h]
  int v54; // [esp+18h] [ebp-6Ch]
  float v55; // [esp+1Ch] [ebp-68h] BYREF
  float v56; // [esp+20h] [ebp-64h]
  float v57; // [esp+24h] [ebp-60h]
  float v58; // [esp+28h] [ebp-5Ch] BYREF
  float v59; // [esp+2Ch] [ebp-58h]
  float v60; // [esp+30h] [ebp-54h]
  float v61[3]; // [esp+34h] [ebp-50h] BYREF
  float v62; // [esp+40h] [ebp-44h] BYREF
  float v63; // [esp+44h] [ebp-40h]
  float v64; // [esp+48h] [ebp-3Ch]
  int v65; // [esp+4Ch] [ebp-38h]
  float v66[4]; // [esp+50h] [ebp-34h] BYREF
  char v67[12]; // [esp+60h] [ebp-24h] BYREF
  char v68[12]; // [esp+6Ch] [ebp-18h] BYREF
  int v69; // [esp+80h] [ebp-4h]

  v54 = *((_DWORD *)Editor::Instance() + 62);
  v53 = "SceneInfo";
  FogDistance = *(float *)&a2;
  *((_DWORD *)Editor::Instance() + 62) = 0;
  Node = XMLSystem::CreateNode((XMLSystem *)(this + 96), (struct xercesc_2_5::DOMNode *)LODWORD(FogDistance), v53);
  if ( *((_BYTE *)Engine::Instance() + 1) )
  {
    XMLSystem::CreateNode((XMLSystem *)(this + 96), Node, "GameModule");
    v53 = 0;
    Engine::Instance();
    Engine::GetModuleName(&v46);
    XMLSystem::Attrib(
      (XMLSystem *)(this + 96),
      "Name",
      (char)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      SLODWORD(FogDistance),
      (struct xercesc_2_5::DOMNode *)v53);
  }
  XMLSystem::CreateNode((XMLSystem *)(this + 96), Node, "General");
  v5 = *a3;
  v53 = 0;
  std::string::string(&v46, v5 + 149);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "SceneName",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v6 = *((_DWORD *)*a3 + 156);
  v53 = 0;
  std::string::string(&v46, v6 + 100);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "LoadingTexture",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v7 = *a3;
  v55 = 0.0;
  v56 = 0.0;
  v53 = 0;
  v57 = 0.0;
  v55 = v7[143];
  v8 = v7[144];
  FogDistance = COERCE_FLOAT(&v55);
  v56 = v8;
  v57 = v7[145];
  XMLSystem::Attrib((XMLSystem *)(this + 96), "CameraPos", (struct Vector *)&v55, 0);
  v9 = *a3;
  v58 = 0.0;
  v59 = 0.0;
  v53 = 0;
  v60 = 0.0;
  v58 = v9[146];
  v59 = v9[147];
  v60 = v9[148];
  XMLSystem::Attrib((XMLSystem *)(this + 96), "CameraDir", (struct Vector *)&v58, 0);
  XMLSystem::CreateNode((XMLSystem *)(this + 96), Node, "Fog");
  v10 = *a3;
  v62 = (*a3)[6];
  v63 = v10[7];
  v64 = v10[8];
  v65 = *((_DWORD *)v10 + 9);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "Color", (struct Vector *)&v62, 0);
  v11 = (World *)*a3;
  v53 = 0;
  FogDistance = World::GetFogDistance(v11);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "Start", FogDistance, (struct xercesc_2_5::DOMNode *)v53);
  v12 = (World *)*a3;
  v53 = 0;
  FogDistance = World::GetFogExponent(v12);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "Exponent", FogDistance, (struct xercesc_2_5::DOMNode *)v53);
  v13 = (World *)*a3;
  v53 = 0;
  FogDistance = World::GetFogStartDistance(v13);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "StartDistance", FogDistance, (struct xercesc_2_5::DOMNode *)v53);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "StartVar", (*a3)[11], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "ExponentVar", (*a3)[13], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "StartDistanceVar", (*a3)[15], 0);
  XMLSystem::CreateNode((XMLSystem *)(this + 96), Node, "SpatialPartition");
  XMLSystem::Attrib((XMLSystem *)(this + 96), "AsyncLoad", *((_BYTE *)*a3 + 724), 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "IsOcTree", *((_BYTE *)*a3 + 748), 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "NodesPerLeaf", *((_DWORD *)*a3 + 188), 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SubareaBorderX", (*a3)[134], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SubareaBorderZ", (*a3)[135], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SubareaWidthX", *((_DWORD *)*a3 + 136), 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SubareaWidthZ", *((_DWORD *)*a3 + 137), 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "LogicCoordOffset", (struct Vector *)(*a3 + 140), 0);
  v61[0] = 0.0;
  v61[1] = 0.0;
  v61[2] = 0.0;
  v62 = 0.0;
  v63 = 0.0;
  v64 = 0.0;
  sub_10001370(v66, &v62, v61);
  v14 = *((_DWORD *)*a3 + 189);
  v69 = 0;
  if ( v14 )
    sub_10102130(v66);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "RealBBoxMin", (struct Vector *)v67, 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "RealBBoxMax", (struct Vector *)v68, 0);
  XMLSystem::CreateNode((XMLSystem *)(this + 96), Node, "Sky");
  XMLSystem::Attrib((XMLSystem *)(this + 96), "LightCone", (*a3)[131], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SkyEnabled", *((_BYTE *)*a3 + 3288), 0);
  v15 = *a3;
  v53 = 0;
  std::string::string(&v46, v15 + 849);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "ScriptClass",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "DisplayTime", *((_BYTE *)*a3 + 3290), 0);
  v16 = *a3;
  v53 = 0;
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SkyBoxSize", v16[823], 0);
  v17 = *a3;
  v53 = 0;
  std::string::string(&v46, v17 + 856);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "SkyShaderFile",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v18 = *a3;
  v53 = 0;
  std::string::string(&v46, v18 + 863);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "SkyBGShaderTechnique",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v19 = *a3;
  v53 = 0;
  XMLSystem::Attrib((XMLSystem *)(this + 96), "EnvironmentMapMultiplier", v19[824], 0);
  v20 = *a3;
  v53 = 0;
  std::string::string(&v46, v20 + 870);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "SunAmbientLightName",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v21 = *a3;
  v53 = 0;
  std::string::string(&v46, v21 + 877);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "MoonAmbientLightName",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v22 = *a3;
  v53 = 0;
  std::string::string(&v46, v22 + 884);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "MoonShaderTechnique",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v23 = *a3;
  v53 = 0;
  std::string::string(&v46, v23 + 891);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "MoonTexture",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "MoonCycleMinuteOffset", (*a3)[825], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "MoonYDistance", (*a3)[826], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "MoonXDistance", (*a3)[827], 0);
  v24 = *a3;
  v53 = 0;
  std::string::string(&v46, v24 + 898);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "SunShaderTechnique",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v25 = *a3;
  v53 = 0;
  std::string::string(&v46, v25 + 905);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "SunTexture",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SunCycleMinuteOffset", (*a3)[828], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SunYDistance", (*a3)[829], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SunXDistance", (*a3)[830], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "FogIntensity", (*a3)[947], 0);
  v26 = *a3;
  v53 = 0;
  std::string::string(&v46, v26 + 912);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "SkyTextureName",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v27 = *a3;
  v53 = 0;
  std::string::string(&v46, v27 + 919);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "SkyTextureNameEnv",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "HasClouds", *((_BYTE *)*a3 + 3328), 0);
  v28 = *a3;
  v53 = 0;
  std::string::string(&v46, v28 + 926);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "CloudModel",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v29 = *a3;
  v53 = 0;
  std::string::string(&v46, v29 + 933);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "CloudMaterialName",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  v30 = *a3;
  v53 = 0;
  std::string::string(&v46, v30 + 940);
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "CloudShaderTechnique",
    (char)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (struct xercesc_2_5::DOMNode *)v53);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "HasLightning", *((_BYTE *)*a3 + 3329), 0);
  v31 = *a3;
  v53 = 0;
  XMLSystem::Attrib((XMLSystem *)(this + 96), "LightningStartMinutes", v31[833], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "LightningEndMinutes", (*a3)[834], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "LightningFlashFrequency", (*a3)[835], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "DrawSun", *((_BYTE *)*a3 + 3344), 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "DrawMoon", *((_BYTE *)*a3 + 3345), 0);
  v32 = *a3;
  v53 = 0;
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SkyIntensity_HDR", v32[837], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SkyIntensity_LDR", (*a3)[838], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "CloudIntensity_HDR", (*a3)[839], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "CloudIntensity_LDR", (*a3)[840], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "AntiFogBias", (*a3)[841], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "DayTimeStart", (*a3)[842], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "DayTimeSpeed", (*a3)[844], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "SunLightIntensityMultiplier", (*a3)[846], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "MoonLightIntensityMultiplier", (*a3)[847], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "MaxDayTime", (*a3)[848], 0);
  XMLSystem::CreateNode((XMLSystem *)(this + 96), Node, "Clip");
  v33 = (World *)*a3;
  v53 = 0;
  FogDistance = World::GetClipPlane(v33);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "FarPlane", FogDistance, (struct xercesc_2_5::DOMNode *)v53);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "FarPlaneVar", (*a3)[19], 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "FarClipSpatialBatching", *((_BYTE *)*a3 + 84), 0);
  XMLSystem::Attrib((XMLSystem *)(this + 96), "ScriptAllLights", *((_BYTE *)*a3 + 782), 0);
  XMLSystem::CreateNode((XMLSystem *)(this + 96), Node, "Occlusion");
  XMLSystem::Attrib((XMLSystem *)(this + 96), "DisableOcclusion", *((_BYTE *)*a3 + 20), 0);
  XMLSystem::CreateNode((XMLSystem *)(this + 96), Node, "LOD");
  XMLSystem::Attrib((XMLSystem *)(this + 96), "LODCullBias", (*a3)[194], 0);
  XMLSystem::CreateNode((XMLSystem *)(this + 96), Node, "EditorCam");
  v53 = 0;
  v34 = Editor::Instance();
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "Direction",
    (struct Editor *)((char *)v34 + 628),
    (struct xercesc_2_5::DOMNode *)v53);
  v53 = 0;
  v35 = Editor::Instance();
  XMLSystem::Attrib(
    (XMLSystem *)(this + 96),
    "Location",
    (struct Editor *)((char *)v35 + 604),
    (struct xercesc_2_5::DOMNode *)v53);
  v53 = 0;
  v36 = Editor::Instance();
  XMLSystem::Attrib((XMLSystem *)(this + 96), "FOV", *((float *)v36 + 60), (struct xercesc_2_5::DOMNode *)v53);
  XMLSystem::CreateNode((XMLSystem *)(this + 96), Node, "Editor");
  XMLSystem::Attrib((XMLSystem *)(this + 96), "CurrentActorID", dword_10283F38, 0);
  std::string::string(&v47, &unk_101BCE9A);
  v46 = (struct xercesc_2_5::DOMNode *)(*a3 + 224);
  v45 = Node;
  LOBYTE(v69) = 1;
  std::string::string(&v38, "[These are the scene defaults]");
  LOBYTE(v69) = 0;
  sub_1003F520(
    this,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    SLODWORD(FogDistance),
    (int)v53);
  *((_DWORD *)Editor::Instance() + 62) = v54;
  v69 = -1;
  return sub_1017A0B0(v66);
}
