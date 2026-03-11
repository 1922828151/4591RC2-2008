/*
 * func-name: sub_10060D50
 * func-address: 0x10060d50
 * callers: none
 * callees: 0x10062f70, 0x10063450, 0x101a2500
 */

void __thiscall sub_10060D50(int this, int a2, int a3, float a4, int a5, int a6)
{
  void (__stdcall *v7)(int, _DWORD, void ***, int); // edx
  void *v8; // esi
  int v9; // [esp+8h] [ebp-3Ch]
  void **v10; // [esp+14h] [ebp-30h] BYREF
  void *v11; // [esp+24h] [ebp-20h]
  int v12; // [esp+40h] [ebp-4h]

  if ( a2 )
  {
    sub_10063450(a2, a5, a6, a3, a4);
    ++*(_DWORD *)(this + 48);
    v7 = *(void (__stdcall **)(int, _DWORD, void ***, int))(**(_DWORD **)(this + 52) + 36);
    v9 = *(_DWORD *)(this + 48);
    v12 = 0;
    v7(a3, LODWORD(a4), &v10, v9);
    v12 = -1;
    v10 = &CEnumBase::`vftable';
    v8 = v11;
    if ( v11 )
    {
      sub_10062F70();
      operator delete(v8);
    }
    --dword_10284C48;
  }
}
