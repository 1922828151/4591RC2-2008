/*
 * func-name: ?GetParser@Serializer@@AAEPAVIParse@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1011b3a0
 * callers: 0x1011b490
 * callees: 0x10040920, 0x1011f5e0, 0x1017a670, 0x101a2534
 */

_DWORD *__stdcall Serializer::GetParser(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  void *v11; // eax
  _BYTE v13[28]; // [esp+8h] [ebp-28h] BYREF
  int v14; // [esp+2Ch] [ebp-4h]

  v14 = 0;
  v7 = sub_1017A670(v13, &a1);
  LOBYTE(v14) = 1;
  std::string::operator=(&a1, v7);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  v8 = 0;
  if ( std::string::find(&a1, ".xml", 0) != -1 )
  {
    v9 = operator new(0xA8u);
    LOBYTE(v14) = 2;
    if ( v9 )
    {
      v10 = sub_10040920(v9);
LABEL_8:
      v8 = v10;
      goto LABEL_9;
    }
    goto LABEL_7;
  }
  if ( std::string::find(&a1, ".reb", 0) != -1 )
  {
    v11 = operator new(0x54u);
    LOBYTE(v14) = 3;
    if ( v11 )
    {
      v10 = (_DWORD *)sub_1011F5E0(v11);
      goto LABEL_8;
    }
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
LABEL_9:
  v14 = -1;
  std::string::~string(&a1);
  return v8;
}
