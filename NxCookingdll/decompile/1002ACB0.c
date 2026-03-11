/*
 * func-name: sub_1002ACB0
 * func-address: 0x1002acb0
 * callers: 0x1002ad60
 * callees: 0x10029f00, 0x1002a6f0
 */

int __usercall sub_1002ACB0@<eax>(
        int a1@<ecx>,
        int a2@<eax>,
        float *a3@<ebx>,
        int a4,
        int a5,
        int *a6,
        _DWORD *a7,
        int *a8,
        float a9,
        float a10)
{
  int v12; // edi
  int v13; // esi
  int v14; // [esp+Ch] [ebp-Ch] BYREF
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  if ( !a2 )
    return 0;
  v15 = 0;
  v16 = 0;
  v14 = 0;
  if ( !sub_10029F00((int)a3, (int)a3, a2, a1, &v14, a10) )
  {
    if ( v14 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v14);
    return 0;
  }
  v12 = v14;
  v13 = sub_1002A6F0(a2, a3, v14, v14, v15, a4, a5, a6, a7, a8, a9);
  if ( v12 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v12);
  return v13;
}
