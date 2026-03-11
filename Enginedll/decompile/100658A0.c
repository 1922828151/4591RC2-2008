/*
 * func-name: ?GetTextSize@Canvas@@QAA?AUtagSIZE@@W4FONT_TYPE@@PBDZZ
 * func-address: 0x100658a0
 * callers: none
 * callees: 0x100971c0, 0x101a26c0
 */

_DWORD *Canvas::GetTextSize(float *a1, _DWORD *a2, int a3, char *Format, ...)
{
  _DWORD *v4; // eax
  double v5; // st7
  _DWORD *result; // eax
  _DWORD v7[9]; // [esp+Ch] [ebp-444h] BYREF
  char v8; // [esp+33h] [ebp-41Dh] BYREF
  _DWORD *v9; // [esp+34h] [ebp-41Ch]
  int v10; // [esp+38h] [ebp-418h]
  int v11; // [esp+3Ch] [ebp-414h] BYREF
  _BYTE v12[4]; // [esp+40h] [ebp-410h] BYREF
  _BYTE v13[4]; // [esp+44h] [ebp-40Ch] BYREF
  _BYTE v14[8]; // [esp+48h] [ebp-408h] BYREF
  char Buffer[1024]; // [esp+50h] [ebp-400h] BYREF
  va_list ArgList; // [esp+464h] [ebp+14h] BYREF

  va_start(ArgList, Format);
  vsprintf(Buffer, Format, ArgList);
  Engine::Instance();
  (*(void (__thiscall **)(float *, int, int *, char *, _BYTE *, _BYTE *))(*(_DWORD *)a1 + 20))(
    a1,
    a3,
    &v11,
    &v8,
    v12,
    v13);
  v9 = v7;
  std::string::string(v7, Buffer);
  v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11 + 32))(
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
