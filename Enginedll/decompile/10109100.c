/*
 * func-name: ??0PostProcess@@QAE@ABV0@@Z
 * func-address: 0x10109100
 * callers: none
 * callees: 0x10108e70
 */

PostProcess *__thiscall PostProcess::PostProcess(PostProcess *this, const struct PostProcess *a2)
{
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  sub_10108E70((_DWORD *)this + 16, (int)a2 + 64);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  return this;
}
