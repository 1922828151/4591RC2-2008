/*
 * func-name: ?Render@CPictureLabel@@UAEXPAUIDirect3DDevice9@@MABUtagRECT@@@Z
 * func-address: 0x100a62c0
 * callers: none
 * callees: 0x100cdd40, 0x101a26c0
 */

void __thiscall CPictureLabel::Render(
        CPictureLabel *this,
        struct IDirect3DDevice9 *a2,
        float a3,
        const struct tagRECT *a4)
{
  int *v5; // edi
  int v6; // ebp
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // [esp+14h] [ebp-40h]
  int v12; // [esp+18h] [ebp-3Ch]
  int v13; // [esp+1Ch] [ebp-38h]
  int v14; // [esp+24h] [ebp-30h]
  int v15; // [esp+28h] [ebp-2Ch]
  int v16; // [esp+2Ch] [ebp-28h]
  int v17; // [esp+30h] [ebp-24h]
  int v18; // [esp+34h] [ebp-20h]
  int v19; // [esp+38h] [ebp-1Ch]
  int v20; // [esp+3Ch] [ebp-18h]
  int v21; // [esp+40h] [ebp-14h]
  int v22; // [esp+44h] [ebp-10h] BYREF
  int v23; // [esp+48h] [ebp-Ch]
  int v24; // [esp+4Ch] [ebp-8h]
  int v25; // [esp+50h] [ebp-4h]

  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    v5 = (int *)((char *)this + 164);
    if ( (unsigned __int8)sub_100CDD40((char *)this + 164, a4, &v22) )
    {
      v11 = (int)((double)(v22 - *v5)
                / (double)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41))
                * (double)(*((_DWORD *)this + 202) - *((_DWORD *)this + 200))
                + (double)*((int *)this + 200));
      v6 = v23;
      v13 = (int)((double)(v24 - v22)
                / (double)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41))
                * (double)(*((_DWORD *)this + 202) - *((_DWORD *)this + 200))
                + (double)v11);
      v12 = (int)((double)(v23 - *((_DWORD *)this + 42))
                / (double)(*((_DWORD *)this + 44) - *((_DWORD *)this + 42))
                * (double)(*((_DWORD *)this + 203) - *((_DWORD *)this + 201))
                + (double)*((int *)this + 201));
      v7 = (int)((double)(v25 - v23)
               / (double)(*((_DWORD *)this + 44) - *((_DWORD *)this + 42))
               * (double)(*((_DWORD *)this + 203) - *((_DWORD *)this + 201))
               + (double)v12);
      v18 = *v5;
      v19 = *((_DWORD *)this + 42);
      v20 = *((_DWORD *)this + 43);
      v21 = *((_DWORD *)this + 44);
      v14 = *((_DWORD *)this + 200);
      v8 = *((_DWORD *)this + 202);
      v15 = *((_DWORD *)this + 201);
      v9 = *((_DWORD *)this + 203);
      *v5 = v22;
      v16 = v8;
      v17 = v9;
      *((_DWORD *)this + 42) = v6;
      v10 = v25;
      *((_DWORD *)this + 43) = v24;
      *((_DWORD *)this + 200) = v11;
      *((_DWORD *)this + 44) = v10;
      *((_DWORD *)this + 201) = v12;
      *((_DWORD *)this + 202) = v13;
      *((_DWORD *)this + 203) = v7;
      (*(void (__thiscall **)(CPictureLabel *, struct IDirect3DDevice9 *, _DWORD))(*(_DWORD *)this + 20))(
        this,
        a2,
        LODWORD(a3));
      *((_DWORD *)this + 200) = v14;
      *((_DWORD *)this + 201) = v15;
      *((_DWORD *)this + 202) = v16;
      *v5 = v18;
      *((_DWORD *)this + 203) = v17;
      *((_DWORD *)this + 42) = v19;
      *((_DWORD *)this + 43) = v20;
      *((_DWORD *)this + 44) = v21;
    }
  }
}
