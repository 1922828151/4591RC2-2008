/*
 * func-name: ?DetachAnimSet@Model@@QAE_NAAVAnimationSet@@@Z
 * func-address: 0x100f2ba0
 * callers: none
 * callees: 0x1010fd40, 0x10110440
 */

BOOL __thiscall Model::DetachAnimSet(Model *this, struct AnimationSet *a2)
{
  int v3; // ebx
  void *v4; // ebp
  int v6; // [esp+10h] [ebp-8h] BYREF
  void *v7; // [esp+14h] [ebp-4h]

  sub_1010FD40(&v6, (char *)a2 + 4);
  v3 = v6;
  v4 = (void *)*((_DWORD *)this + 104);
  if ( !v6 || (Model *)v6 != (Model *)((char *)this + 412) )
    invalid_parameter_noinfo();
  if ( v7 != v4 )
    sub_10110440((int)&v6, v3, v7);
  return (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 94) + 36))(
           *((_DWORD *)this + 94),
           *((_DWORD *)a2 + 10)) == 0;
}
