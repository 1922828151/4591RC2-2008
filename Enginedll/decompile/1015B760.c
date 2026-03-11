/*
 * func-name: sub_1015B760
 * func-address: 0x1015b760
 * callers: none
 * callees: 0x100956b0, 0x100a32c0, 0x100aef10, 0x100c54e0, 0x100d6d20, 0x101a26c0
 */

int __thiscall sub_1015B760(CTYDialog *this, float a2)
{
  int v3; // ecx
  struct GUISystem *v5; // edi
  struct GUISystem *v6; // ebp
  int v7; // eax
  double v8; // st7
  double v9; // st6
  int v10; // edi
  bool v11; // cc
  const wchar_t *v12; // eax
  double v13; // st6
  int v14; // eax
  int v15; // ecx
  double v16; // st6
  unsigned int v17; // eax
  int v18; // edi
  double v19; // st6
  double v20; // st7
  double v21; // st6
  double v22; // st7
  bool v23; // zf
  signed int v24; // ecx
  double v25; // rt2
  int *v26; // eax
  int v27; // ecx
  int v28; // edx
  int *v29; // eax
  int v30; // ecx
  int v31; // edx
  float v32; // [esp+14h] [ebp-30h]
  float v33; // [esp+18h] [ebp-2Ch]
  int v34; // [esp+18h] [ebp-2Ch]
  float v35; // [esp+18h] [ebp-2Ch]
  float v36; // [esp+18h] [ebp-2Ch]
  float v37; // [esp+18h] [ebp-2Ch]
  float v38; // [esp+18h] [ebp-2Ch]
  _BYTE v39[4]; // [esp+1Ch] [ebp-28h] BYREF
  wchar_t *v40[6]; // [esp+20h] [ebp-24h] BYREF
  float v41; // [esp+40h] [ebp-4h]

  if ( *((_BYTE *)this + 4004)
    || (v33 = fabs(*((float *)this + 1003)), v33 <= 0.00009999999747378752)
    || *((float *)this + 1003) >= GetGSeconds() )
  {
    v5 = GUISystem::Instance();
    v6 = GUISystem::Instance();
    v34 = *(_DWORD *)v6;
    v7 = (*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v5 + 76))(v5, this);
    (*(void (__thiscall **)(struct GUISystem *, int))(v34 + 60))(v6, v7);
    v8 = 1.0;
    if ( *((_BYTE *)this + 3992) )
    {
      v9 = *((float *)this + 999);
      if ( GSeconds - v9 > 1.0 )
      {
        v23 = ++*((_DWORD *)this + 997) == 6;
        *((float *)this + 999) = v9 + 1.0;
        if ( v23 )
          *((_DWORD *)this + 997) = 0;
        v10 = 0;
        std::wstring::wstring(v39, (char *)this + 3960);
        v11 = *((_DWORD *)this + 997) <= 0;
        v41 = 0.0;
        if ( !v11 )
        {
          do
          {
            ++v10;
            std::wstring::operator+=(v39, 46);
          }
          while ( v10 < *((_DWORD *)this + 997) );
        }
        v12 = v40[0];
        if ( v40[5] < (wchar_t *)8 )
          v12 = (const wchar_t *)v40;
        CREStatic::SetText(*((CREStatic **)this + 968), v12);
        v41 = NAN;
        std::wstring::~wstring(v39);
        v8 = 1.0;
      }
    }
    v13 = GSeconds - *((float *)this + 999);
    v35 = v13 + v13;
    v14 = (int)v35;
    v15 = v14;
    v16 = v35 - (double)v14;
    v17 = ((int)(((unsigned __int64)(1431655765LL * v14) >> 32) - v14) >> 1)
        + ((unsigned int)(((unsigned __int64)(1431655765LL * v14) >> 32) - v14) >> 31);
    v18 = v17 + (int)v35 + 2 * v17;
    v36 = v16;
    v19 = v8 - v36;
    v20 = v36;
    v37 = v19;
    *(float *)(*((_DWORD *)this + v18 + 974) + 528) = v37;
    v21 = v20;
    v22 = v37;
    *(float *)(*((_DWORD *)this + (v18 + 2) % 3 + 974) + 528) = v21;
    v24 = v15 & 0x80000001;
    v23 = v24 == 0;
    *(float *)(*((_DWORD *)this + (v18 + 1) % 3 + 974) + 528) = 1.0;
    if ( v24 < 0 )
      v23 = (((_BYTE)v24 - 1) | 0xFFFFFFFE) == -1;
    if ( v23 )
    {
      v25 = v21;
      v21 = v37;
      v22 = v25;
    }
    v26 = (int *)((char *)this + 3908);
    v27 = 5;
    do
    {
      v28 = *v26;
      v26 += 2;
      v32 = v21;
      *(float *)(v28 + 528) = v32;
      --v27;
    }
    while ( v27 );
    v29 = (int *)((char *)this + 3912);
    v30 = 5;
    do
    {
      v31 = *v29;
      v29 += 2;
      v38 = v22;
      *(float *)(v31 + 528) = v38;
      --v30;
    }
    while ( v30 );
    return CTYDialog::OnRender(this, a2);
  }
  else
  {
    v3 = *((_DWORD *)this + 971);
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3);
    CTYDialog::ShowDialog(this, 0, 0.0);
    return 0;
  }
}
