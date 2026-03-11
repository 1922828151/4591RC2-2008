/*
 * func-name: sub_1011A120
 * func-address: 0x1011a120
 * callers: 0x1011a250, 0x1011a980
 * callees: 0x101a2522
 */

int __cdecl sub_1011A120(CREControl *a1, int a2, _DWORD *a3)
{
  CREControl *v3; // esi
  int result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  CREControl *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a1;
  v9 = &v6;
  v8 = a1;
  v10 = 0;
  while ( a2 )
  {
    v7 = v3;
    LOBYTE(v10) = 1;
    if ( v3 )
    {
      *(_DWORD *)v3 = *a3;
      *((_DWORD *)v3 + 1) = a3[1];
      *((_DWORD *)v3 + 2) = a3[2];
      result = std::string::string((char *)v3 + 12, a3 + 3);
    }
    --a2;
    v3 = (CREControl *)((char *)v3 + 40);
    LOBYTE(v10) = 0;
  }
  return result;
}
