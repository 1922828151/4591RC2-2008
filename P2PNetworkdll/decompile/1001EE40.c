/*
 * func-name: sub_1001EE40
 * func-address: 0x1001ee40
 * callers: 0x1001e290
 * callees: 0x1001de90, 0x1001ea40, 0x100232f7
 */

int (__cdecl **__cdecl sub_1001EE40(int a1, int a2, int a3))(int, int, int, int)
{
  void (__cdecl *v3)(int, int *, int, char **, char *); // edx
  int v5; // eax
  char *v6; // [esp+8h] [ebp-8Ch] BYREF
  int v7; // [esp+Ch] [ebp-88h] BYREF
  char v8[127]; // [esp+10h] [ebp-84h] BYREF
  char v9; // [esp+8Fh] [ebp-5h] BYREF

  v3 = *(void (__cdecl **)(int, int *, int, char **, char *))(a1 + 56);
  v7 = a2;
  v6 = v8;
  v3(a1, &v7, a3, &v6, &v9);
  if ( v7 != a3 )
    return 0;
  *v6 = 0;
  if ( sub_1001DE90("UTF-16", v8) && *(_DWORD *)(a1 + 64) == 2 )
    return (int (__cdecl **)(int, int, int, int))a1;
  v5 = sub_1001EA40(v8);
  if ( v5 == -1 )
    return 0;
  return off_100300A4[v5];
}
