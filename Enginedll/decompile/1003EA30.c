/*
 * func-name: sub_1003EA30
 * func-address: 0x1003ea30
 * callers: 0x10044770
 * callees: 0x10009e80, 0x1004a170, 0x1004a290, 0x1004a340, 0x1004a380, 0x1004a460, 0x1004abc0, 0x10076ef0
 */

unsigned int __thiscall sub_1003EA30(int this, struct xercesc_2_5::DOMNode *a2, int a3)
{
  XMLSystem *v3; // edi
  struct xercesc_2_5::DOMNode *Node; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebp
  unsigned int result; // eax
  int v10; // ecx
  int v11; // esi
  struct xercesc_2_5::DOMNode *v12; // ebx
  struct xercesc_2_5::DOMElement *v13; // eax
  char *v14; // ecx
  unsigned int i; // ebx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int **v20; // ebp
  int *v21; // eax
  int *v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  char v26; // [esp-18h] [ebp-3Ch] BYREF
  int v27; // [esp-14h] [ebp-38h]
  int v28; // [esp-10h] [ebp-34h]
  int v29; // [esp-Ch] [ebp-30h]
  int v30; // [esp-8h] [ebp-2Ch]
  int v31; // [esp-4h] [ebp-28h]
  int v32; // [esp+0h] [ebp-24h]
  struct xercesc_2_5::DOMNode *v33; // [esp+4h] [ebp-20h]
  struct xercesc_2_5::DOMNode *v34; // [esp+18h] [ebp-Ch]
  struct xercesc_2_5::DOMNode *v35; // [esp+1Ch] [ebp-8h]
  char *v36; // [esp+20h] [ebp-4h]
  struct xercesc_2_5::DOMNode *v37; // [esp+28h] [ebp+4h]

  v3 = (XMLSystem *)(this + 96);
  Node = XMLSystem::CreateNode((XMLSystem *)(this + 96), a2, "MaterialList");
  v5 = a3;
  v6 = *(_DWORD *)(a3 + 4);
  v34 = Node;
  if ( v6 )
    v7 = (*(_DWORD *)(a3 + 8) - v6) >> 2;
  else
    v7 = 0;
  XMLSystem::Attrib(v3, "Count", v7, 0);
  v8 = 0;
  v37 = 0;
  result = std::vector<Model *>::size(a3);
  if ( result )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v5 + 4);
      if ( !v10 || v8 >= (*(_DWORD *)(v5 + 8) - v10) >> 2 )
        invalid_parameter_noinfo();
      v11 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v8);
      v12 = XMLSystem::CreateNode(v3, v34, "Material");
      XMLSystem::Attrib(v3, "index", v8, 0);
      v33 = 0;
      v36 = &v26;
      std::string::string(&v26, v11 + 184);
      XMLSystem::Attrib(v3, "Name", v26, v27, v28, v29, v30, v31, v32, v33);
      XMLSystem::Attrib(v3, "Collidable", *(_BYTE *)(v11 + 144), 0);
      XMLSystem::CreateNode(v3, v12, "Physics");
      XMLSystem::Attrib(v3, "Friction", *(float *)(v11 + 332), 0);
      XMLSystem::Attrib(v3, "Restitution", *(float *)(v11 + 336), 0);
      XMLSystem::Attrib(v3, "SortingOrder", *(_DWORD *)(v11 + 212), 0);
      v13 = XMLSystem::CreateNode(v3, v12, "Shader");
      v14 = *(char **)(v11 + 152);
      v33 = 0;
      v35 = v13;
      v36 = &v26;
      Shader::GetFilename(v14, (int)&v26);
      XMLSystem::Attrib(v3, "File", v26, v27, v28, v29, v30, v31, v32, v33);
      v33 = 0;
      v36 = &v26;
      std::string::string(&v26, v11 + 56);
      XMLSystem::Attrib(v3, "Technique", v26, v27, v28, v29, v30, v31, v32, v33);
      for ( i = 0; ; ++i )
      {
        v16 = *(_DWORD *)(v11 + 280);
        if ( !v16 || i >= (*(_DWORD *)(v11 + 284) - v16) >> 2 )
          break;
        v17 = *(_DWORD *)(v11 + 280);
        if ( !v17 || i >= (*(_DWORD *)(v11 + 284) - v17) >> 2 )
          invalid_parameter_noinfo();
        v18 = *(_DWORD *)(v11 + 280);
        v36 = (char *)(4 * i + v18);
        if ( !v18 || i >= (*(_DWORD *)(v11 + 284) - v18) >> 2 )
          invalid_parameter_noinfo();
        v19 = *(_DWORD *)(v11 + 280);
        v20 = (int **)(4 * i + v19);
        if ( !v19 || i >= (*(_DWORD *)(v11 + 284) - v19) >> 2 )
          invalid_parameter_noinfo();
        v21 = (int *)(4 * i + *(_DWORD *)(v11 + 280));
        v33 = v35;
        v22 = *v20;
        v32 = *(_DWORD *)(*(_DWORD *)v36 + 60);
        v23 = *v22;
        v24 = *v21;
        v31 = v23;
        v25 = std::string::c_str(v24 + 4);
        XMLSystem::WriteParameter(v3, v25, v31, v32, v33);
        v8 = (unsigned int)v37;
      }
      v37 = (struct xercesc_2_5::DOMNode *)++v8;
      result = std::vector<Model *>::size(a3);
      if ( v8 >= result )
        break;
      v5 = a3;
    }
  }
  return result;
}
