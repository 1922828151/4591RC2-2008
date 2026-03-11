/*
 * func-name: ?PrecacheModel@Precacher@@SAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV?$vector@UAnimInfo@Precacher@@V?$allocator@UAnimInfo@Precacher@@@std@@@3@PAV?$vector@UBoneNodeInfo@Precacher@@V?$allocator@UBoneNodeInfo@Precacher@@@std@@@3@H@Z
 * func-address: 0x1010e120
 * callers: none
 * callees: 0x101121f0, 0x10115c90, 0x10115d40, 0x10116770
 */

int __cdecl Precacher::PrecacheModel(char a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _BYTE v10[28]; // [esp+4h] [ebp-48h] BYREF
  int v11; // [esp+24h] [ebp-28h]
  int v12; // [esp+28h] [ebp-24h]
  int v13; // [esp+2Ch] [ebp-20h]
  int v14; // [esp+34h] [ebp-18h]
  int v15; // [esp+38h] [ebp-14h]
  int v16; // [esp+3Ch] [ebp-10h]
  int v17; // [esp+48h] [ebp-4h]

  v17 = 0;
  std::string::string(v10);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  LOBYTE(v17) = 3;
  std::string::operator=(v10, &a1);
  if ( a8 )
    sub_101121F0(a8);
  if ( a9 )
    sub_10115D40(a9);
  sub_10116770((int)&Precacher::m_vecModels, v10);
  LOBYTE(v17) = 0;
  sub_10115C90(v10);
  v17 = -1;
  return std::string::~string(&a1);
}
