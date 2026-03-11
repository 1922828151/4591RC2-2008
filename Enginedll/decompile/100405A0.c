/*
 * func-name: ?WriteMaterials@MaterialSerializer@@AAEXPAVDOMElement@xercesc_2_5@@@Z
 * func-address: 0x100405a0
 * callers: 0x100407f0
 * callees: 0x10009e80, 0x1004a170, 0x1004a290, 0x1004a380, 0x1004abc0, 0x100e79a0
 */

void __thiscall MaterialSerializer::WriteMaterials(MaterialSerializer *this, struct xercesc_2_5::DOMElement *a2)
{
  int v3; // edx
  int i; // esi
  MaterialLibrary *v5; // ecx
  int v6; // edx
  int v7; // eax
  struct Material *Material; // esi
  struct xercesc_2_5::DOMNode *Node; // ebx
  struct xercesc_2_5::DOMElement *v10; // eax
  char *v11; // ecx
  unsigned int j; // ebx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int **v17; // ebp
  int *v18; // eax
  int *v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  char v23; // [esp-20h] [ebp-40h] BYREF
  int v24; // [esp-1Ch] [ebp-3Ch]
  int v25; // [esp-18h] [ebp-38h]
  int v26; // [esp-14h] [ebp-34h]
  int v27; // [esp-10h] [ebp-30h]
  int v28; // [esp-Ch] [ebp-2Ch]
  int v29; // [esp-8h] [ebp-28h]
  struct xercesc_2_5::DOMNode *v30; // [esp-4h] [ebp-24h]
  int v31; // [esp+10h] [ebp-10h]
  RPC_CSTR StringUuid; // [esp+14h] [ebp-Ch] BYREF
  struct xercesc_2_5::DOMNode *v33; // [esp+18h] [ebp-8h]
  char *v34; // [esp+1Ch] [ebp-4h]

  v3 = *((_DWORD *)this + 23);
  v30 = a2;
  v34 = &v23;
  std::string::string(&v23, v3 + 16);
  XMLSystem::Attrib(this, "Name", v23, v24, v25, v26, v27, v28, v29, v30);
  for ( i = 0; ; i = v31 + 1 )
  {
    v5 = (MaterialLibrary *)*((_DWORD *)this + 23);
    v6 = *((_DWORD *)v5 + 1);
    v31 = i;
    v7 = v6 ? (*((_DWORD *)v5 + 2) - v6) >> 2 : 0;
    if ( i >= v7 )
      break;
    Material = MaterialLibrary::GetMaterial(v5, i);
    Node = XMLSystem::CreateNode(this, a2, "Material");
    UuidToStringA((const UUID *)((char *)Material + 40), &StringUuid);
    XMLSystem::Attrib(this, "GUID", StringUuid != 0, 0);
    v30 = 0;
    v34 = &v23;
    std::string::string(&v23, (char *)Material + 184);
    XMLSystem::Attrib(this, "Name", v23, v24, v25, v26, v27, v28, v29, v30);
    v30 = 0;
    v34 = &v23;
    std::string::string(&v23, (char *)Material + 116);
    XMLSystem::Attrib(this, "Category", v23, v24, v25, v26, v27, v28, v29, v30);
    v10 = XMLSystem::CreateNode(this, Node, "Shader");
    v30 = 0;
    v34 = &v23;
    v11 = (char *)*((_DWORD *)Material + 38);
    v33 = v10;
    Shader::GetFilename(v11, (int)&v23);
    XMLSystem::Attrib(this, "File", v23, v24, v25, v26, v27, v28, v29, v30);
    v30 = 0;
    v34 = &v23;
    std::string::string(&v23, (char *)Material + 56);
    XMLSystem::Attrib(this, "Technique", v23, v24, v25, v26, v27, v28, v29, v30);
    for ( j = 0; ; ++j )
    {
      v13 = *((_DWORD *)Material + 70);
      if ( !v13 || j >= (*((_DWORD *)Material + 71) - v13) >> 2 )
        break;
      v14 = *((_DWORD *)Material + 70);
      if ( !v14 || j >= (*((_DWORD *)Material + 71) - v14) >> 2 )
        invalid_parameter_noinfo();
      v15 = *((_DWORD *)Material + 70);
      v34 = (char *)(4 * j + v15);
      if ( !v15 || j >= (*((_DWORD *)Material + 71) - v15) >> 2 )
        invalid_parameter_noinfo();
      v16 = *((_DWORD *)Material + 70);
      v17 = (int **)(4 * j + v16);
      if ( !v16 || j >= (*((_DWORD *)Material + 71) - v16) >> 2 )
        invalid_parameter_noinfo();
      v18 = (int *)(4 * j + *((_DWORD *)Material + 70));
      v30 = v33;
      v19 = *v17;
      v29 = *(_DWORD *)(*(_DWORD *)v34 + 60);
      v20 = *v19;
      v21 = *v18;
      v28 = v20;
      v22 = std::string::c_str(v21 + 4);
      XMLSystem::WriteParameter(this, v22, v28, v29, v30);
    }
  }
}
