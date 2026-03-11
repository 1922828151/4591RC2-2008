/*
 * func-name: NxCreatePMap
 * func-address: 0x1002f3a0
 * callers: 0x10024b70
 * callees: 0x1000fda0, 0x10012670, 0x100126b0, 0x10014c10, 0x10014f50, 0x10015020, 0x100150a0, 0x10035300
 */

char __cdecl NxCreatePMap(
        int a1,
        int a2,
        int a3,
        void (__thiscall ***a4)(_DWORD, int, const char *, const char *, int))
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  size_t v7; // edi
  char *v8; // eax
  _DWORD v10[7]; // [esp+8h] [ebp-90h] BYREF
  float v11[29]; // [esp+24h] [ebp-74h] BYREF

  v4 = *(_DWORD *)(a2 + 8);
  sub_10012670(v11);
  sub_10014F50((int)v10, (void **)0x1000, 0);
  if ( sub_100126B0((int)v11, v4, a3, 0, v10, 0, a4) )
  {
    v5 = sub_10014C10(v10);
    *(_DWORD *)a1 = v5;
    v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v5, 283);
    v7 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 4) = v6;
    v8 = sub_100150A0((int)v10, 0);
    memcpy_0(*(void **)(a1 + 4), v8, v7);
    sub_10015020(v10);
    sub_1000FDA0(v11);
    return 1;
  }
  else
  {
    sub_10015020(v10);
    sub_1000FDA0(v11);
    return 0;
  }
}
