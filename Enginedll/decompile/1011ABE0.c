/*
 * func-name: ?GetSaver@Serializer@@AAEPAVISave@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1011abe0
 * callers: 0x1011b1a0, 0x1011b2a0, 0x1011b780
 * callees: 0x100108d0, 0x100367e0, 0x1011f570, 0x101a2534
 */

OBJSave *__stdcall Serializer::GetSaver(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  OBJSave *v7; // esi
  void *v8; // eax
  OBJSave *v9; // eax
  ISave *v10; // eax
  OBJSave *v11; // eax

  v7 = 0;
  if ( std::string::find(&a1, ".xml", 0) != -1 )
  {
    v8 = operator new(0xC4u);
    if ( v8 )
    {
      v9 = (OBJSave *)sub_1011F570(v8);
LABEL_12:
      v7 = v9;
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  if ( std::string::find(&a1, ".reb", 0) == -1 )
  {
    if ( std::string::find(&a1, ".obj", 0) != -1 )
    {
      v11 = (OBJSave *)operator new(0x74u);
      if ( v11 )
      {
        v9 = OBJSave::OBJSave(v11);
        goto LABEL_12;
      }
LABEL_11:
      v9 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    v10 = (ISave *)operator new(0x64u);
    v7 = v10;
    if ( v10 )
    {
      ISave::ISave(v10);
      *(_DWORD *)v7 = &BinarySave::`vftable';
      *((_DWORD *)v7 + 22) = 0;
      *((_DWORD *)v7 + 23) = 0;
      *((_DWORD *)v7 + 21) = 0;
    }
    else
    {
      v7 = 0;
    }
  }
LABEL_13:
  std::string::~string(&a1);
  return v7;
}
