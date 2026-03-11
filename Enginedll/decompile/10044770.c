/*
 * func-name: sub_10044770
 * func-address: 0x10044770
 * callers: none
 * callees: 0x10010390, 0x1003ea30, 0x1003fa50, 0x1003fb30, 0x10043b90, 0x10049140, 0x1004b530, 0x1007ec70, 0x1009ef10
 */

char __thiscall sub_10044770(ISave *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, char *a9)
{
  unsigned int v10; // edi
  int v11; // esi
  char *Document; // eax
  int v13; // edx
  struct xercesc_2_5::DOMNode *v14; // ebx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int i; // edi
  int v22; // ecx
  unsigned int v23; // edi
  int j; // ebx
  struct Editor *v25; // eax
  int v26; // edx
  char *v27; // eax
  struct Editor *v28; // esi
  int v29; // eax
  char *v30; // esi
  char v32; // [esp-1Ch] [ebp-40h] BYREF
  int v33; // [esp-18h] [ebp-3Ch]
  int v34; // [esp-14h] [ebp-38h]
  int v35; // [esp-10h] [ebp-34h]
  int v36; // [esp-Ch] [ebp-30h]
  int v37; // [esp-8h] [ebp-2Ch]
  int v38; // [esp-4h] [ebp-28h]
  struct xercesc_2_5::DOMNode *v39; // [esp+10h] [ebp-14h]
  char *v40; // [esp+14h] [ebp-10h]
  int v41; // [esp+20h] [ebp-4h]

  v10 = 0;
  v41 = 0;
  std::string::operator=((char *)this + 4, &a2);
  v11 = (int)a9;
  *((_DWORD *)this + 47) = a9;
  v40 = &v32;
  *((_DWORD *)this + 23) = GetTickCount();
  std::string::string(&v32, "IGame");
  Document = (char *)XMLSystem::CreateDocument(v32, v33, v34, v35, v36, v37, v38);
  v13 = *(_DWORD *)Document;
  v40 = Document;
  v14 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(char *))(v13 + 48))(Document);
  v39 = v14;
  while ( 1 )
  {
    v15 = *(_DWORD *)(v11 + 3224);
    if ( !v15 || v10 >= (*(_DWORD *)(v11 + 3228) - v15) >> 2 )
      break;
    v16 = *(_DWORD *)(v11 + 3224);
    if ( *(_DWORD *)(*(_DWORD *)(v16 + 4 * v10) + 716) )
    {
      if ( !v16 || v10 >= (*(_DWORD *)(v11 + 3228) - v16) >> 2 )
        invalid_parameter_noinfo();
      v17 = *(_DWORD *)(v11 + 3224);
      if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v17 + 4 * v10) + 716) + 312) )
      {
        if ( !v17 || v10 >= (*(_DWORD *)(v11 + 3228) - v17) >> 2 )
          invalid_parameter_noinfo();
        v18 = *(_DWORD *)(v11 + 3224);
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v18 + 4 * v10) + 716) + 308) )
        {
          if ( !v18 || v10 >= (*(_DWORD *)(v11 + 3228) - v18) >> 2 )
            invalid_parameter_noinfo();
          ModelFrame::FindMaterials((char *)this + 68);
          v19 = *(_DWORD *)(v11 + 3224);
          if ( !v19 || v10 >= (*(_DWORD *)(v11 + 3228) - v19) >> 2 )
            invalid_parameter_noinfo();
          v20 = *(_DWORD *)(v11 + 3224);
          if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v20 + 4 * v10) + 716) + 144) )
          {
            if ( !v20 || v10 >= (*(_DWORD *)(v11 + 3228) - v20) >> 2 )
              invalid_parameter_noinfo();
            ModelFrame::FindMaterials((char *)this + 68);
          }
        }
      }
    }
    v14 = v39;
    ++v10;
  }
  sub_1003FB30((int)this, v14, (float **)&a9);
  sub_1003EA30((int)this, v14, (int)this + 68);
  for ( i = 0; ; ++i )
  {
    v22 = *(_DWORD *)(v11 + 3224);
    if ( !v22 || i >= (*(_DWORD *)(v11 + 3228) - v22) >> 2 )
      break;
    sub_10043B90((int)this, v14, (int *)(*(_DWORD *)(v11 + 3224) + 4 * i));
  }
  v23 = 0;
  for ( j = 0; ; j += 44 )
  {
    v25 = Editor::Instance();
    v26 = *((_DWORD *)v25 + 566);
    v27 = (char *)v25 + 2260;
    if ( !v26 || v23 >= (*((_DWORD *)v27 + 2) - v26) / 44 )
      break;
    v28 = Editor::Instance();
    v29 = *((_DWORD *)v28 + 566);
    v30 = (char *)v28 + 2260;
    if ( !v29 || v23 >= (*((_DWORD *)v30 + 2) - v29) / 44 )
      invalid_parameter_noinfo();
    sub_1003FA50((int)this, v39, (const char *)(j + *((_DWORD *)v30 + 1)));
    ++v23;
  }
  a9 = &v32;
  std::string::string(&v32, &a2);
  XMLSystem::Save(v32, v33, v34, v35, v36, v37, v38);
  (**(void (__thiscall ***)(char *, int))v40)(v40, 1);
  xercesc_2_5::XMLPlatformUtils::Terminate();
  ISave::ClearUnusedFiles(this);
  v41 = -1;
  std::string::~string(&a2);
  return 1;
}
