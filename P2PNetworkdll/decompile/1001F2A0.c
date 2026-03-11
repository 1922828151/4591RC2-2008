/*
 * func-name: sub_1001F2A0
 * func-address: 0x1001f2a0
 * callers: 0x10012e40, 0x10013360
 * callees: 0x1001f330, 0x1001f3b0, 0x10023bb2
 */

int __usercall sub_1001F2A0@<eax>(const void *a1@<eax>, _DWORD *a2@<ecx>, size_t a3@<edi>)
{
  size_t v4; // ecx
  int (__cdecl *v5)(_DWORD *, const void *, size_t, _DWORD); // eax
  int v6; // eax
  void *v8; // eax
  const void *v9; // [esp-Ch] [ebp-10h]
  const void *v10; // [esp-Ch] [ebp-10h]

  if ( a3 )
  {
    if ( a2[3] != a2[4] )
    {
      v10 = a1;
      v8 = (void *)sub_1001F3B0();
      memcpy(v8, v10, a3);
      return sub_1001F330();
    }
    a2[6] += a3;
    v4 = (size_t)a1 + a3;
  }
  else
  {
    a1 = (const void *)a2[3];
    v4 = a2[4];
  }
  v9 = a1;
  a2[63] = a1;
  v5 = (int (__cdecl *)(_DWORD *, const void *, size_t, _DWORD))a2[59];
  a2[7] = v4;
  v6 = v5(a2, v9, v4, 0);
  a2[60] = v6;
  if ( !v6 )
    return 1;
  a2[62] = a2[61];
  a2[59] = sub_10021C60;
  return 0;
}
