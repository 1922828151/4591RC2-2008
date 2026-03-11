/*
 * func-name: ?GetLoader@Serializer@@AAEPAVILoad@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1011aa80
 * callers: 0x1011acf0, 0x1011b080
 * callees: 0x10036730, 0x1003e300, 0x100408a0, 0x1011f2a0, 0x1017a670, 0x101a2534
 */

OBJLoad *__stdcall Serializer::GetLoader(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  OBJLoad *v8; // esi
  _DWORD *v9; // eax
  OBJLoad *v10; // eax
  void *v11; // eax
  XFileLoad *v12; // eax
  OBJLoad *v13; // eax
  _BYTE v15[28]; // [esp+8h] [ebp-28h] BYREF
  int v16; // [esp+2Ch] [ebp-4h]

  v16 = 0;
  v7 = sub_1017A670(v15, &a1);
  LOBYTE(v16) = 1;
  std::string::operator=(&a1, v7);
  LOBYTE(v16) = 0;
  std::string::~string(v15);
  v8 = 0;
  if ( std::string::find(&a1, ".xml", 0) != -1 )
  {
    v9 = operator new(0xB8u);
    LOBYTE(v16) = 2;
    if ( v9 )
    {
      v10 = (OBJLoad *)sub_100408A0(v9);
LABEL_14:
      v8 = v10;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  if ( std::string::find(&a1, ".reb", 0) != -1 )
  {
    v11 = operator new(0x64u);
    LOBYTE(v16) = 3;
    if ( v11 )
    {
      v10 = (OBJLoad *)sub_1011F2A0(v11);
      goto LABEL_14;
    }
LABEL_13:
    v10 = 0;
    goto LABEL_14;
  }
  if ( std::string::find(&a1, ".x", 0) != -1 )
  {
    v12 = (XFileLoad *)operator new(0x50u);
    LOBYTE(v16) = 4;
    if ( v12 )
    {
      v10 = XFileLoad::XFileLoad(v12);
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if ( std::string::find(&a1, ".obj", 0) != -1 )
  {
    v13 = (OBJLoad *)operator new(0x30u);
    LOBYTE(v16) = 5;
    if ( v13 )
    {
      v10 = OBJLoad::OBJLoad(v13);
      goto LABEL_14;
    }
    goto LABEL_13;
  }
LABEL_15:
  v16 = -1;
  std::string::~string(&a1);
  return v8;
}
