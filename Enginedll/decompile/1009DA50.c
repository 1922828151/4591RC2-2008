/*
 * func-name: ?Find@ModelFrame@@QAEPAU1@PBDPAU1@@Z
 * func-address: 0x1009da50
 * callers: 0x1009da50, 0x1009f6b0, 0x100ee5c0
 * callees: 0x1009da50
 */

struct ModelFrame *__thiscall ModelFrame::Find(ModelFrame *this, const char *a2, struct ModelFrame *a3)
{
  struct ModelFrame *result; // eax
  int v5; // eax
  char v6; // bl
  ModelFrame *v7; // ecx
  ModelFrame *v8; // ecx
  _BYTE v9[28]; // [esp+4h] [ebp-28h] BYREF
  int v10; // [esp+28h] [ebp-4h]

  if ( this == a3 )
    return 0;
  v5 = std::string::string(v9, a2);
  v10 = 0;
  v6 = std::operator==<char>((char *)this + 44, v5);
  v10 = -1;
  std::string::~string(v9);
  if ( v6 )
    return this;
  v7 = (ModelFrame *)*((_DWORD *)this + 89);
  if ( !v7 || (result = ModelFrame::Find(v7, a2, 0)) == 0 )
  {
    v8 = (ModelFrame *)*((_DWORD *)this + 90);
    if ( !v8 )
      return 0;
    result = ModelFrame::Find(v8, a2, 0);
    if ( !result )
      return 0;
  }
  return result;
}
