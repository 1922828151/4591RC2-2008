/*
 * func-name: sub_10060BC0
 * func-address: 0x10060bc0
 * callers: none
 * callees: 0x10062f70, 0x10063200, 0x101a2500
 */

void __thiscall sub_10060BC0(_DWORD *this, int a2, float *a3, int a4, int a5)
{
  float v6; // ecx
  float v7; // eax
  int v8; // eax
  int v9; // ecx
  void (__thiscall *v10)(int, float *, void ***, int); // edx
  void *v11; // esi
  void **v12; // [esp+Ch] [ebp-2Ch] BYREF
  char v13; // [esp+18h] [ebp-20h]
  void *v14; // [esp+1Ch] [ebp-1Ch]
  float v15; // [esp+20h] [ebp-18h]
  float v16; // [esp+24h] [ebp-14h]
  float v17; // [esp+28h] [ebp-10h]
  int v18; // [esp+34h] [ebp-4h]

  if ( a2 )
  {
    sub_10063200(a2, a4, a5);
    v15 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
    v12 = &CEnumPoint::`vftable';
    if ( !v13 )
    {
      v6 = a3[1];
      v15 = *a3;
      v7 = a3[2];
      v16 = v6;
      v17 = v7;
    }
    v8 = ++this[12];
    v9 = this[13];
    v10 = *(void (__thiscall **)(int, float *, void ***, int))(*(_DWORD *)v9 + 28);
    v18 = 0;
    v10(v9, a3, &v12, v8);
    v18 = -1;
    v12 = &CEnumBase::`vftable';
    v11 = v14;
    if ( v14 )
    {
      sub_10062F70();
      operator delete(v11);
    }
    --dword_10284C48;
  }
}
