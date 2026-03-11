/*
 * func-name: sub_1015B520
 * func-address: 0x1015b520
 * callers: 0x10149510
 * callees: 0x100a32c0
 */

int __thiscall sub_1015B520(int this, int a2, float a3, char a4, float a5)
{
  const wchar_t *v6; // eax
  int v7; // ecx
  double v8; // st6
  int v9; // ecx
  int result; // eax
  float v11; // [esp+10h] [ebp+8h]

  *(_BYTE *)(this + 3992) = LOBYTE(a3);
  if ( *(_DWORD *)(a2 + 24) < 8u )
    v6 = (const wchar_t *)(a2 + 4);
  else
    v6 = *(const wchar_t **)(a2 + 4);
  CREStatic::SetText(*(CREStatic **)(this + 3872), v6);
  std::wstring::operator=(this + 3960, a2);
  *(float *)(this + 3996) = GSeconds;
  if ( a4 )
    *(_DWORD *)(this + 3988) = 0;
  v7 = *(_DWORD *)(this + 3876);
  *(_BYTE *)(this + 4004) = 0;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 136))(v7, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3880) + 136))(*(_DWORD *)(this + 3880), 0);
  v11 = fabs(a5);
  v8 = 0.0;
  if ( v11 >= 0.00009999999747378752 )
    v8 = a5 + *(float *)(this + 3996);
  *(float *)(this + 4012) = v8;
  v9 = *(_DWORD *)(this + 3896);
  *(_DWORD *)(this + 3956) = 0;
  *(float *)(v9 + 528) = 1.0;
  *(float *)(*(_DWORD *)(this + 3900) + 528) = 1.0;
  result = *(_DWORD *)(this + 3904);
  *(float *)(result + 528) = 0.0;
  return result;
}
