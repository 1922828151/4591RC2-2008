/*
 * func-name: ?AddControlToTabPage@CRETabPages@@QAEXHPAVCREControl@@@Z
 * func-address: 0x100b13f0
 * callers: 0x1014a750
 * callees: 0x1006c5d0
 */

void __thiscall CRETabPages::AddControlToTabPage(CRETabPages *this, int a2, struct CREControl *a3)
{
  int v4; // edx
  _DWORD *v5; // esi

  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)a3 + 156))(
    a3,
    *((_DWORD *)this + 24) + *((_DWORD *)a3 + 24),
    *((_DWORD *)this + 25) + *((_DWORD *)a3 + 25));
  v4 = *((_DWORD *)this + 133);
  v5 = (_DWORD *)(532 * a2 + v4 + 512);
  if ( sub_1006C5D0((int)v5, *(_DWORD *)(532 * a2 + v4 + 516) + 1) >= 0 )
    *(_DWORD *)(*v5 + 4 * v5[1]++) = a3;
}
