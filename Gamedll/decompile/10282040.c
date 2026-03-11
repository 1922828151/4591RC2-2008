/*
 * func-name: ??1CRobotRoofUI@@UAE@XZ_0
 * func-address: 0x10282040
 * callers: 0x10016595
 * callees: 0x102c9d50
 */

void __thiscall CRobotRoofUI::~CRobotRoofUI(CRobotRoofUI *this)
{
  int v2; // ecx

  *(_DWORD *)this = &CRobotRoofUI::`vftable';
  v2 = *((_DWORD *)this + 977);
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, 1);
  if ( *((_DWORD *)this + 1010) )
    operator delete(*((void **)this + 1010));
  *((_DWORD *)this + 1010) = 0;
  *((_DWORD *)this + 1011) = 0;
  *((_DWORD *)this + 1012) = 0;
  if ( *((_DWORD *)this + 1000) )
    operator delete(*((void **)this + 1000));
  *((_DWORD *)this + 1000) = 0;
  *((_DWORD *)this + 1001) = 0;
  *((_DWORD *)this + 1002) = 0;
  if ( *((_DWORD *)this + 995) )
    operator delete(*((void **)this + 995));
  *((_DWORD *)this + 995) = 0;
  *((_DWORD *)this + 996) = 0;
  *((_DWORD *)this + 997) = 0;
  if ( *((_DWORD *)this + 991) )
    operator delete(*((void **)this + 991));
  *((_DWORD *)this + 991) = 0;
  *((_DWORD *)this + 992) = 0;
  *((_DWORD *)this + 993) = 0;
  if ( *((_DWORD *)this + 987) )
    operator delete(*((void **)this + 987));
  *((_DWORD *)this + 987) = 0;
  *((_DWORD *)this + 988) = 0;
  *((_DWORD *)this + 989) = 0;
  if ( *((_DWORD *)this + 983) )
    operator delete(*((void **)this + 983));
  *((_DWORD *)this + 983) = 0;
  *((_DWORD *)this + 984) = 0;
  *((_DWORD *)this + 985) = 0;
  CTYDialog::~CTYDialog(this);
}
