/*
 * func-name: sub_10002C50
 * func-address: 0x10002c50
 * callers: none
 * callees: 0x10019750
 */

bool __thiscall sub_10002C50(_DWORD **this, unsigned int a2, char a3)
{
  _DWORD *v5; // eax
  int v6; // [esp+8h] [ebp-248h] BYREF
  _BYTE v7[576]; // [esp+Ch] [ebp-244h] BYREF

  if ( a2 <= 3 )
  {
    if ( !a3 )
      return this[a2 + 1523] != 0;
    v5 = this[a2 + 1523];
    if ( v5 )
    {
      v6 = 580;
      if ( (*(int (__stdcall **)(_DWORD *, int *))(*v5 + 60))(v5, &v6)
        || (*(int (__stdcall **)(_DWORD *, _BYTE *))(*this[1520] + 20))(this[1520], v7) )
      {
        this[a2 + 1523] = 0;
      }
    }
  }
  return 0;
}
