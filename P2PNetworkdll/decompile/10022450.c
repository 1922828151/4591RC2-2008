/*
 * func-name: sub_10022450
 * func-address: 0x10022450
 * callers: 0x1001f4a0, 0x10020960, 0x10020c10, 0x10020f30, 0x10021ad0, 0x10022290, 0x100223b0
 * callees: none
 */

int __usercall sub_10022450@<eax>(int a1@<eax>, int a2@<ebx>, int a3@<esi>, int a4)
{
  _DWORD *v5; // ebp
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  int result; // eax
  int v8; // [esp-8h] [ebp-14h]
  _DWORD *v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  if ( *(_BYTE *)(a2 + 68) )
    return (*(int (__cdecl **)(_DWORD, int, int))(a3 + 68))(*(_DWORD *)(a3 + 4), a4, a1 - a4);
  if ( a2 == *(_DWORD *)(a3 + 120) )
  {
    v5 = (_DWORD *)(a3 + 244);
    v9 = (_DWORD *)(a3 + 248);
  }
  else
  {
    v5 = *(_DWORD **)(a3 + 256);
    v9 = v5 + 1;
  }
  do
  {
    v8 = *(_DWORD *)(a3 + 36);
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(a2 + 56);
    v10 = *(_DWORD *)(a3 + 32);
    v6(a2, &a4, a1, &v10, v8);
    *v9 = a4;
    result = (*(int (__cdecl **)(_DWORD, _DWORD, int))(a3 + 68))(
               *(_DWORD *)(a3 + 4),
               *(_DWORD *)(a3 + 32),
               v10 - *(_DWORD *)(a3 + 32));
    *v5 = a4;
  }
  while ( a4 != a1 );
  return result;
}
