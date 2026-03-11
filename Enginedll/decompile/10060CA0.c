/*
 * func-name: sub_10060CA0
 * func-address: 0x10060ca0
 * callers: none
 * callees: 0x10062f70, 0x100632e0, 0x101a2500
 */

void __thiscall sub_10060CA0(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx
  void (__thiscall *v8)(int, int, int, void ***, int); // edx
  void *v9; // esi
  int v10; // [esp+0h] [ebp-48h]
  void **v11; // [esp+10h] [ebp-38h] BYREF
  void *v12; // [esp+20h] [ebp-28h]
  int v13; // [esp+44h] [ebp-4h]

  if ( a2 )
  {
    sub_100632E0(a2, a5, a6, a3, a4);
    ++this[12];
    v7 = this[13];
    v8 = *(void (__thiscall **)(int, int, int, void ***, int))(*(_DWORD *)v7 + 32);
    v10 = this[12];
    v13 = 0;
    v8(v7, a3, a4, &v11, v10);
    v13 = -1;
    v11 = &CEnumBase::`vftable';
    v9 = v12;
    if ( v12 )
    {
      sub_10062F70();
      operator delete(v9);
    }
    --dword_10284C48;
  }
}
