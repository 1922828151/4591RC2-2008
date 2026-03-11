/*
 * func-name: ?Save@Material@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100e2c10
 * callers: none
 * callees: 0x10001720, 0x10009e80, 0x10049140, 0x1004a170, 0x1004a290, 0x1004a340, 0x1004a380, 0x1004a460, 0x1004abc0, 0x1004b530
 */

char __thiscall Material::Save(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int Document; // eax
  struct xercesc_2_5::DOMNode *v10; // edi
  struct xercesc_2_5::DOMElement *Node; // eax
  char *v12; // ecx
  unsigned int i; // edi
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int **v18; // ebp
  int v19; // eax
  int *v20; // ecx
  int v21; // edx
  int v22; // ecx
  char *v23; // eax
  char v25; // [esp-18h] [ebp-A8h] BYREF
  int v26; // [esp-14h] [ebp-A4h] BYREF
  int v27; // [esp-10h] [ebp-A0h]
  int v28; // [esp-Ch] [ebp-9Ch]
  int v29; // [esp-8h] [ebp-98h]
  int v30; // [esp-4h] [ebp-94h]
  float *v31; // [esp+0h] [ebp-90h]
  struct xercesc_2_5::DOMNode *v32; // [esp+4h] [ebp-8Ch]
  RPC_CSTR StringUuid; // [esp+18h] [ebp-78h] BYREF
  struct xercesc_2_5::DOMNode *v34; // [esp+1Ch] [ebp-74h]
  int *v35; // [esp+20h] [ebp-70h]
  int v36; // [esp+24h] [ebp-6Ch]
  _DWORD v37[8]; // [esp+28h] [ebp-68h] BYREF
  _BYTE v38[60]; // [esp+48h] [ebp-48h] BYREF
  int v39; // [esp+8Ch] [ebp-4h]

  v39 = 0;
  v36 = this + 292;
  std::string::operator=(this + 292, &a2);
  XMLSystem::XMLSystem((XMLSystem *)v37);
  v35 = &v26;
  LOBYTE(v39) = 1;
  std::string::string(&v26, "Material");
  Document = XMLSystem::CreateDocument(v37, v26, v27, v28, v29, v30, (int)v31, (int)v32);
  v10 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int))(*(_DWORD *)Document + 48))(Document);
  UuidToStringA((const UUID *)(this + 40), &StringUuid);
  XMLSystem::Attrib((XMLSystem *)v37, "GUID", StringUuid != 0, 0);
  v32 = 0;
  v35 = (int *)&v25;
  std::string::string(&v25, this + 184);
  XMLSystem::Attrib((XMLSystem *)v37, "Name", v25, v26, v27, v28, v29, v30, (int)v31, v32);
  v32 = 0;
  v35 = (int *)&v25;
  std::string::string(&v25, this + 116);
  XMLSystem::Attrib((XMLSystem *)v37, "Category", v25, v26, v27, v28, v29, v30, (int)v31, v32);
  XMLSystem::Attrib((XMLSystem *)v37, "Collidable", *(_BYTE *)(this + 144), 0);
  XMLSystem::CreateNode((XMLSystem *)v37, v10, "Physics");
  XMLSystem::Attrib((XMLSystem *)v37, "Friction", *(float *)(this + 332), 0);
  XMLSystem::Attrib((XMLSystem *)v37, "Restitution", *(float *)(this + 336), 0);
  XMLSystem::Attrib((XMLSystem *)v37, "SortingOrder", *(_DWORD *)(this + 212), 0);
  Node = XMLSystem::CreateNode((XMLSystem *)v37, v10, "Shader");
  v12 = *(char **)(this + 152);
  v32 = 0;
  v34 = Node;
  v35 = (int *)&v25;
  Shader::GetFilename(v12, (int)&v25);
  XMLSystem::Attrib((XMLSystem *)v37, "File", v25, v26, v27, v28, v29, v30, (int)v31, v32);
  v32 = 0;
  v35 = (int *)&v25;
  std::string::string(&v25, this + 56);
  XMLSystem::Attrib((XMLSystem *)v37, "Technique", v25, v26, v27, v28, v29, v30, (int)v31, v32);
  for ( i = 0; ; ++i )
  {
    v14 = *(_DWORD *)(this + 280);
    if ( !v14 || i >= (*(_DWORD *)(this + 284) - v14) >> 2 )
      break;
    v15 = *(_DWORD *)(this + 280);
    if ( !v15 || i >= (*(_DWORD *)(this + 284) - v15) >> 2 )
      invalid_parameter_noinfo();
    v16 = *(_DWORD *)(this + 280);
    v35 = (int *)(4 * i + v16);
    if ( !v16 || i >= (*(_DWORD *)(this + 284) - v16) >> 2 )
      invalid_parameter_noinfo();
    v17 = *(_DWORD *)(this + 280);
    v18 = (int **)(4 * i + v17);
    if ( !v17 || i >= (*(_DWORD *)(this + 284) - v17) >> 2 )
      invalid_parameter_noinfo();
    v19 = *(_DWORD *)(this + 280);
    v32 = v34;
    v20 = *v18;
    v31 = *(float **)(*v35 + 60);
    v21 = *v20;
    v22 = *(_DWORD *)(v19 + 4 * i);
    v30 = v21;
    v23 = (char *)std::string::c_str(v22 + 4);
    XMLSystem::WriteParameter((XMLSystem *)v37, v23, v30, v31, v32);
  }
  v35 = &v26;
  std::string::string(&v26, v36);
  XMLSystem::Save((int)v37, v26, v27, v28, v29, v30, (int)v31, (int)v32);
  LOBYTE(v39) = 2;
  std::string::~string(v38);
  LOBYTE(v39) = 0;
  std::string::~string(v37);
  v39 = -1;
  std::string::~string(&a2);
  return 1;
}
