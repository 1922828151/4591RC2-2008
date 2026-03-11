/*
 * func-name: sub_1003ECE0
 * func-address: 0x1003ece0
 * callers: 0x10043b90
 * callees: 0x1004a170, 0x1004a1f0, 0x1004a290, 0x1004a460, 0x1004a4a0
 */

int __thiscall sub_1003ECE0(int this, struct xercesc_2_5::DOMNode *a2, int *a3)
{
  XMLSystem *v3; // esi
  struct xercesc_2_5::DOMNode *Node; // ebp
  int v5; // eax
  struct xercesc_2_5::DOMNode *v6; // ebx
  int v7; // edx
  int v8; // eax
  char v10; // [esp-18h] [ebp-58h] BYREF
  int v11; // [esp-14h] [ebp-54h]
  int v12; // [esp-10h] [ebp-50h]
  int v13; // [esp-Ch] [ebp-4Ch]
  int v14; // [esp-8h] [ebp-48h]
  int v15; // [esp-4h] [ebp-44h]
  int v16; // [esp+0h] [ebp-40h]
  struct xercesc_2_5::DOMNode *v17; // [esp+4h] [ebp-3Ch]
  _BYTE v18[28]; // [esp+18h] [ebp-28h] BYREF
  int v19; // [esp+3Ch] [ebp-4h]

  v3 = (XMLSystem *)(this + 96);
  Node = XMLSystem::CreateNode((XMLSystem *)(this + 96), a2, "LightData");
  std::string::string(v18, "Omni");
  v5 = *(_DWORD *)(*a3 + 1428);
  v19 = 0;
  switch ( v5 )
  {
    case 2:
      v17 = (struct xercesc_2_5::DOMNode *)"Free";
      break;
    case 4:
      v17 = (struct xercesc_2_5::DOMNode *)"Directional";
      break;
    case 8:
      v17 = (struct xercesc_2_5::DOMNode *)"OmniProjector";
      break;
    default:
      goto LABEL_8;
  }
  std::string::operator=(v18, v17);
LABEL_8:
  v17 = 0;
  std::string::string(&v10, v18);
  XMLSystem::Attrib(v3, "Type", v10, v11, v12, v13, v14, v15, v16, v17);
  v6 = XMLSystem::CreateNode(v3, Node, "Properties");
  XMLSystem::CreateNode(v3, v6, "Prop");
  XMLSystem::Attrib(v3, "name", "Color", 0);
  XMLSystem::Attrib(v3, "value", (struct Vector *)(*a3 + 1076), 0);
  XMLSystem::CreateNode(v3, v6, "Prop");
  XMLSystem::Attrib(v3, "name", "Multiplier", 0);
  XMLSystem::Attrib(v3, "value", *(float *)(*a3 + 1092), 0);
  XMLSystem::CreateNode(v3, v6, "Prop");
  XMLSystem::Attrib(v3, "name", "AttenuationFarEnd", 0);
  XMLSystem::Attrib(v3, "value", *(float *)(*a3 + 1136), 0);
  XMLSystem::CreateNode(v3, v6, "Prop");
  XMLSystem::Attrib(v3, "name", "Falloff", 0);
  XMLSystem::Attrib(v3, "value", *(float *)(*a3 + 1140), 0);
  XMLSystem::CreateNode(v3, v6, "Prop");
  XMLSystem::Attrib(v3, "name", "Hotspot", 0);
  XMLSystem::Attrib(v3, "value", *(float *)(*a3 + 1144), 0);
  if ( *(_BYTE *)(*a3 + 1420) )
  {
    XMLSystem::CreateNode(v3, Node, "ShadowMap");
    v7 = *a3;
    v17 = 0;
    std::string::string(&v10, v7 + 1364);
    XMLSystem::Attrib(v3, "Name", v10, v11, v12, v13, v14, v15, v16, v17);
  }
  else if ( std::string::find(*a3 + 1364, ".", 0) != -1 )
  {
    XMLSystem::CreateNode(v3, Node, "ProjectionMap");
    v8 = *a3;
    v17 = 0;
    std::string::string(&v10, v8 + 1364);
    XMLSystem::Attrib(v3, "Name", v10, v11, v12, v13, v14, v15, v16, v17);
  }
  v19 = -1;
  return std::string::~string(v18);
}
