/*
 * func-name: sub_10060E00
 * func-address: 0x10060e00
 * callers: none
 * callees: 0x10062f70, 0x10063200, 0x101a2500
 */

void __thiscall sub_10060E00(_DWORD *this, int a2, int a3, int a4, int a5)
{
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  int v11; // ecx
  void (__thiscall *v12)(int, int, float *, int); // edx
  void *v13; // esi
  int v14; // [esp+0h] [ebp-48h]
  float v15; // [esp+Ch] [ebp-3Ch] BYREF
  float v16; // [esp+10h] [ebp-38h]
  float v17; // [esp+14h] [ebp-34h]
  void *v18; // [esp+1Ch] [ebp-2Ch]
  int v19; // [esp+20h] [ebp-28h]
  _DWORD v20[3]; // [esp+24h] [ebp-24h] BYREF
  _DWORD v21[3]; // [esp+30h] [ebp-18h] BYREF
  int v22; // [esp+44h] [ebp-4h]

  if ( a2 )
  {
    if ( *(_BYTE *)(a3 + 49) )
    {
      sub_10063200(a2, a4, a5);
      v15 = COERCE_FLOAT(&CEnumRay::`vftable');
      v19 = a3;
      ++this[12];
      v11 = this[13];
      v12 = *(void (__thiscall **)(int, int, float *, int))(*(_DWORD *)v11 + 40);
      v14 = this[12];
      v22 = 0;
      v12(v11, a3, &v15, v14);
      v22 = -1;
      v15 = COERCE_FLOAT(&CEnumBase::`vftable');
      v13 = v18;
      if ( v18 )
      {
        sub_10062F70();
        operator delete(v13);
      }
      --dword_10284C48;
    }
    else
    {
      v15 = *(float *)a3 - *(float *)(a3 + 36);
      v6 = *(float *)(a3 + 4);
      *(float *)v21 = v15;
      v16 = v6 - *(float *)(a3 + 40);
      v7 = *(float *)(a3 + 8);
      *(float *)&v21[1] = v16;
      v17 = v7 - *(float *)(a3 + 44);
      v8 = *(float *)a3;
      *(float *)&v21[2] = v17;
      v15 = v8 + *(float *)(a3 + 36);
      v9 = *(float *)(a3 + 40);
      *(float *)v20 = v15;
      v16 = v9 + *(float *)(a3 + 4);
      v10 = *(float *)(a3 + 44);
      *(float *)&v20[1] = v16;
      v17 = v10 + *(float *)(a3 + 8);
      *(float *)&v20[2] = v17;
      (*(void (__thiscall **)(_DWORD *, int, _DWORD *, _DWORD *, int, int))(*this + 40))(this, a2, v21, v20, a4, a5);
    }
  }
}
