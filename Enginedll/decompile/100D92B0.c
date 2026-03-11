/*
 * func-name: sub_100D92B0
 * func-address: 0x100d92b0
 * callers: 0x100d95a0, 0x100d9c80
 * callees: 0x101a2522
 */

void *__cdecl sub_100D92B0(CREControl *a1, int a2, void *a3)
{
  CREControl *v3; // esi
  void *result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  void *v8; // [esp+10h] [ebp-14h]
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
      std::wstring::wstring(v3, a3);
      result = a3;
      *((_DWORD *)v3 + 7) = *((_DWORD *)a3 + 7);
      *((_BYTE *)v3 + 32) = *((_BYTE *)a3 + 32);
    }
    --a2;
    v3 = (CREControl *)((char *)v3 + 36);
    LOBYTE(v10) = 0;
  }
  return result;
}
