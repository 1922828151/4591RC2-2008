/*
 * func-name: ?GetTextSize@Canvas@@QAA?AUtagSIZE@@W4FONT_TYPE@@PB_WZZ
 * func-address: 0x10065960
 * callers: none
 * callees: 0x100971c0, 0x101a26c0
 */

_DWORD *Canvas::GetTextSize(float *a1, _DWORD *a2, int a3, wchar_t *Format, ...)
{
  _DWORD *v4; // eax
  double v5; // st7
  _DWORD *result; // eax
  _DWORD v7[9]; // [esp+Ch] [ebp-844h] BYREF
  char v8; // [esp+33h] [ebp-81Dh] BYREF
  _DWORD *v9; // [esp+34h] [ebp-81Ch]
  int v10; // [esp+38h] [ebp-818h]
  int v11; // [esp+3Ch] [ebp-814h] BYREF
  _BYTE v12[4]; // [esp+40h] [ebp-810h] BYREF
  _BYTE v13[4]; // [esp+44h] [ebp-80Ch] BYREF
  _BYTE v14[8]; // [esp+48h] [ebp-808h] BYREF
  wchar_t Buffer[1024]; // [esp+50h] [ebp-800h] BYREF
  va_list ArgList; // [esp+864h] [ebp+14h] BYREF

  va_start(ArgList, Format);
  vswprintf_c_l(Buffer, 0x400u, Format, 0, ArgList);
  Engine::Instance();
  (*(void (__thiscall **)(float *, int, int *, char *, _BYTE *, _BYTE *))(*(_DWORD *)a1 + 20))(
    a1,
    a3,
    &v11,
    &v8,
    v12,
    v13);
  v9 = v7;
  std::wstring::wstring(v7, Buffer);
  v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11 + 28))(
                   v11,
                   v14,
                   v7[0],
                   v7[1],
                   v7[2],
                   v7[3],
                   v7[4],
                   v7[5],
                   v7[6]);
  v9 = (_DWORD *)*v4;
  v10 = v4[1];
  v5 = (double)v10 / a1[14];
  result = a2;
  *a2 = (int)((double)(int)v9 / a1[13]);
  a2[1] = (int)v5;
  return result;
}
