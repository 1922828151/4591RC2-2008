/*
 * func-name: ??0Canvas@@QAE@ABV0@@Z
 * func-address: 0x1002d1e0
 * callers: none
 * callees: 0x1002bae0
 */

Canvas *__thiscall Canvas::Canvas(Canvas *this, const struct Canvas *a2)
{
  *(_DWORD *)this = &Canvas::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  sub_1002BAE0((int *)this + 8, (int)a2 + 32);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((float *)this + 13) = *((float *)a2 + 13);
  *((float *)this + 14) = *((float *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_BYTE *)this + 76) = *((_BYTE *)a2 + 76);
  *((_BYTE *)this + 77) = *((_BYTE *)a2 + 77);
  *((_BYTE *)this + 78) = *((_BYTE *)a2 + 78);
  *((_BYTE *)this + 79) = *((_BYTE *)a2 + 79);
  *((_BYTE *)this + 80) = *((_BYTE *)a2 + 80);
  return this;
}
