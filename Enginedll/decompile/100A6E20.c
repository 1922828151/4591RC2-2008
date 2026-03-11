/*
 * func-name: ?UpdateRects@CRENumericEdit@@MAEXXZ
 * func-address: 0x100a6e20
 * callers: none
 * callees: 0x101a26c0
 */

void __thiscall CRENumericEdit::UpdateRects(CRENumericEdit *this)
{
  _DWORD *v2; // edi
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  int v10; // ebx

  v2 = (_DWORD *)((char *)this + 164);
  SetRect(
    (LPRECT)((char *)this + 164),
    *((_DWORD *)this + 24),
    *((_DWORD *)this + 25),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25) + *((_DWORD *)this + 27));
  v3 = *((_DWORD *)this + 42);
  v4 = *((_DWORD *)this + 43);
  *((_DWORD *)this + 186) = *v2;
  v5 = *((_DWORD *)this + 44);
  v6 = *((_DWORD *)this + 42);
  *((_DWORD *)this + 187) = v3;
  v7 = *((_DWORD *)this + 184);
  *((_DWORD *)this + 188) = v4;
  *((_DWORD *)this + 189) = v5;
  v8 = *((_DWORD *)this + 186) + v7;
  *((_DWORD *)this + 188) = v8;
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 190) + 156))(*((_DWORD *)this + 190), v8, v6);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 190) + 160))(
    *((_DWORD *)this + 190),
    *((_DWORD *)this + 26) - *((_DWORD *)this + 185) - *((_DWORD *)this + 184) - 1,
    *((_DWORD *)this + 27));
  v9 = (int)((double)*((int *)this + 27) * 0.5);
  v10 = *(_DWORD *)(*((_DWORD *)this + 190) + 172) + 1;
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 191) + 156))(
    *((_DWORD *)this + 191),
    v10,
    *((_DWORD *)this + 42));
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 191) + 160))(
    *((_DWORD *)this + 191),
    *((_DWORD *)this + 185),
    v9);
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 192) + 156))(
    *((_DWORD *)this + 192),
    v10,
    v9 + *((_DWORD *)this + 42));
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 192) + 160))(
    *((_DWORD *)this + 192),
    *((_DWORD *)this + 185),
    v9);
}
