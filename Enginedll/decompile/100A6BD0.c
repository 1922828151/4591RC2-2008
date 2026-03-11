/*
 * func-name: ?UpdateValue@CRENumericEdit@@UAEXPB_W_N@Z
 * func-address: 0x100a6bd0
 * callers: none
 * callees: none
 */

void __thiscall CRENumericEdit::UpdateValue(CRENumericEdit *this, LPCWCH lpWideCharStr, bool a3)
{
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  float v7; // [esp+0h] [ebp-6Ch]
  CHAR MultiByteStr[100]; // [esp+8h] [ebp-64h] BYREF
  float lpWideCharStra; // [esp+70h] [ebp+4h]

  if ( *((_BYTE *)this + 696) )
  {
    WideCharToMultiByte(0, 0, lpWideCharStr, -1, MultiByteStr, 99, 0, 0);
    lpWideCharStra = atof(MultiByteStr);
    v6 = lpWideCharStra;
    if ( *((float *)this + 181) >= (double)lpWideCharStra )
    {
      if ( *((float *)this + 182) > v6 || a3 && *((float *)this + 182) >= v6 )
        v6 = *((float *)this + 182);
    }
    else
    {
      v6 = *((float *)this + 181);
    }
    v7 = v6;
    (*(void (__thiscall **)(CRENumericEdit *, _DWORD))(*(_DWORD *)this + 204))(this, LODWORD(v7));
  }
  else
  {
    WideCharToMultiByte(0, 0, lpWideCharStr, -1, MultiByteStr, 99, 0, 0);
    v4 = atoi(MultiByteStr);
    v5 = *((_DWORD *)this + 179);
    if ( v4 > v5 || (v5 = *((_DWORD *)this + 180), v4 < v5) || a3 && v4 <= v5 )
      (*(void (__thiscall **)(CRENumericEdit *, int))(*(_DWORD *)this + 200))(this, v5);
    else
      *((_DWORD *)this + 177) = v4;
  }
}
