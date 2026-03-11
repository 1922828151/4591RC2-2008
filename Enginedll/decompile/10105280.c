/*
 * func-name: ??0PostProcessEffect@@QAE@ABV0@@Z
 * func-address: 0x10105280
 * callers: 0x101054e0
 * callees: none
 */

PostProcessEffect *__thiscall PostProcessEffect::PostProcessEffect(
        PostProcessEffect *this,
        const struct PostProcessEffect *a2)
{
  *(_DWORD *)this = &PostProcessEffect::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_BYTE *)this + 12) = *((_BYTE *)a2 + 12);
  *((_BYTE *)this + 13) = *((_BYTE *)a2 + 13);
  *((_BYTE *)this + 14) = *((_BYTE *)a2 + 14);
  *((_BYTE *)this + 15) = *((_BYTE *)a2 + 15);
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  std::string::string((char *)this + 20, (char *)a2 + 20);
  std::string::string((char *)this + 48, (char *)a2 + 48);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((float *)this + 22) = *((float *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_BYTE *)this + 108) = *((_BYTE *)a2 + 108);
  *((_BYTE *)this + 109) = *((_BYTE *)a2 + 109);
  *((_BYTE *)this + 110) = *((_BYTE *)a2 + 110);
  qmemcpy((char *)this + 112, (char *)a2 + 112, 0x80u);
  qmemcpy((char *)this + 240, (char *)a2 + 240, 0x100u);
  return this;
}
