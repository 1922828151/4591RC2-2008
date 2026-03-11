/*
 * func-name: ??0SubareaManager@@QAE@ABV0@@Z
 * func-address: 0x1003cc50
 * callers: none
 * callees: 0x1003c9c0
 */

SubareaManager *__thiscall SubareaManager::SubareaManager(SubareaManager *this, const struct SubareaManager *a2)
{
  *(_DWORD *)this = &SubareaManager::`vftable';
  sub_1003C9C0((int)this + 4, (int)a2 + 4);
  *((_BYTE *)this + 20) = *((_BYTE *)a2 + 20);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((float *)this + 8) = *((float *)a2 + 8);
  *((float *)this + 9) = *((float *)a2 + 9);
  *((float *)this + 10) = *((float *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  std::string::string((char *)this + 80, (char *)a2 + 80);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  return this;
}
