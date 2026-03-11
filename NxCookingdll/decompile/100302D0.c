/*
 * func-name: sub_100302D0
 * func-address: 0x100302d0
 * callers: 0x1001e350
 * callees: 0x10014910, 0x100160e0, 0x100162c0, 0x10016480, 0x100164b0, 0x10024570
 */

char __userpurge sub_100302D0@<al>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  char result; // al
  int (__stdcall ***v5)(size_t, int); // eax
  unsigned __int16 *v6; // edi
  unsigned int i; // eax
  int (__stdcall ***v8)(size_t, int); // eax
  char v9; // [esp+Ch] [ebp-4h]
  int v10; // [esp+18h] [ebp+8h]

  v9 = NxPlatformMismatch((int)a1);
  result = sub_100162C0(86, 65, 76, 69, 2, v9, a3);
  if ( result )
  {
    sub_100160E0(a1[1], v9, a3);
    sub_100160E0(a1[2], v9, a3);
    v5 = sub_10014910();
    v6 = (unsigned __int16 *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int, int))**v5)(
                               v5,
                               2 * a1[1],
                               1,
                               a2);
    for ( i = 0; i < a1[1]; ++i )
      v6[i] = *(_WORD *)(a1[3] + 4 * i);
    v10 = (unsigned __int16)sub_10016480(v6, a1[1]);
    sub_100160E0(v10, v9, a3);
    sub_100164B0(v10, a1[1], (int)v6, a3, v9);
    if ( v6 )
    {
      v8 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int16 *))(*v8)[3])(v8, v6);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 48))(a3, a1[4]);
    return 1;
  }
  return result;
}
