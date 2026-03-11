/*
 * func-name: sub_1015B610
 * func-address: 0x1015b610
 * callers: 0x10149580, 0x101495d0
 * callees: 0x100a32c0
 */

int __thiscall sub_1015B610(int this, int a2, int a3, int a4)
{
  const wchar_t *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int result; // eax

  *(_BYTE *)(this + 3992) = 0;
  if ( *(_DWORD *)(a2 + 24) < 8u )
    v5 = (const wchar_t *)(a2 + 4);
  else
    v5 = *(const wchar_t **)(a2 + 4);
  CREStatic::SetText(*(CREStatic **)(this + 3872), v5);
  std::wstring::operator=(this + 3960, a2);
  *(_DWORD *)(this + 4000) = a3;
  *(float *)(this + 3996) = GSeconds;
  *(_DWORD *)(this + 4008) = a4;
  *(_BYTE *)(this + 4004) = 1;
  switch ( a4 )
  {
    case 1:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3876) + 136))(*(_DWORD *)(this + 3876), 1);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3876) + 156))(*(_DWORD *)(this + 3876), 28, 58);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3880) + 136))(*(_DWORD *)(this + 3880), 1);
      goto LABEL_10;
    case 3:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3876) + 136))(*(_DWORD *)(this + 3876), 0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3880) + 136))(*(_DWORD *)(this + 3880), 1);
LABEL_10:
      v6 = *(_DWORD *)(this + 3880);
      goto LABEL_11;
    case 4:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3880) + 136))(*(_DWORD *)(this + 3880), 0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3876) + 136))(*(_DWORD *)(this + 3876), 1);
      v6 = *(_DWORD *)(this + 3876);
LABEL_11:
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 156))(v6);
      break;
  }
  v7 = *(_DWORD *)(this + 3896);
  *(_DWORD *)(this + 3956) = 0;
  *(float *)(v7 + 528) = 1.0;
  *(float *)(*(_DWORD *)(this + 3900) + 528) = 1.0;
  result = *(_DWORD *)(this + 3904);
  *(float *)(result + 528) = 0.0;
  return result;
}
