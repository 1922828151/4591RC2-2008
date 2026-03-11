/*
 * func-name: ??1CStatusUI@@UAE@XZ_0
 * func-address: 0x1028c170
 * callers: 0x100023dd
 * callees: 0x102c9d50
 */

void __thiscall CStatusUI::~CStatusUI(CStatusUI *this)
{
  int v2; // eax
  EventAttemper *v3; // eax
  int v4; // eax
  EventAttemper *v5; // eax
  int v6; // eax
  EventAttemper *v7; // eax
  int v8; // eax
  EventAttemper *v9; // eax
  int v10; // eax
  EventAttemper *v11; // eax
  int v12; // eax
  EventAttemper *v13; // eax
  int v14; // eax
  EventAttemper *v15; // eax
  int v16; // eax
  EventAttemper *v17; // eax

  *(_DWORD *)this = &CStatusUI::`vftable';
  v2 = *((_DWORD *)this + 1013);
  if ( v2 )
  {
    v3 = (EventAttemper *)EventAttemper::Instance(v2, 1);
    EventAttemper::RemoveObserver(v3);
  }
  v4 = *((_DWORD *)this + 1014);
  if ( v4 )
  {
    v5 = (EventAttemper *)EventAttemper::Instance(v4, 1);
    EventAttemper::RemoveObserver(v5);
  }
  v6 = *((_DWORD *)this + 1015);
  if ( v6 )
  {
    v7 = (EventAttemper *)EventAttemper::Instance(v6, 1);
    EventAttemper::RemoveObserver(v7);
  }
  v8 = *((_DWORD *)this + 1016);
  if ( v8 )
  {
    v9 = (EventAttemper *)EventAttemper::Instance(v8, 1);
    EventAttemper::RemoveObserver(v9);
  }
  v10 = *((_DWORD *)this + 1017);
  if ( v10 )
  {
    v11 = (EventAttemper *)EventAttemper::Instance(v10, 1);
    EventAttemper::RemoveObserver(v11);
  }
  v12 = *((_DWORD *)this + 1018);
  if ( v12 )
  {
    v13 = (EventAttemper *)EventAttemper::Instance(v12, 1);
    EventAttemper::RemoveObserver(v13);
  }
  v14 = *((_DWORD *)this + 1019);
  if ( v14 )
  {
    v15 = (EventAttemper *)EventAttemper::Instance(v14, 1);
    EventAttemper::RemoveObserver(v15);
  }
  v16 = *((_DWORD *)this + 1020);
  if ( v16 )
  {
    v17 = (EventAttemper *)EventAttemper::Instance(v16, 1);
    EventAttemper::RemoveObserver(v17);
  }
  if ( *((_DWORD *)this + 1001) )
    operator delete(*((void **)this + 1001));
  *((_DWORD *)this + 1001) = 0;
  *((_DWORD *)this + 1002) = 0;
  *((_DWORD *)this + 1003) = 0;
  if ( *((_DWORD *)this + 997) )
    operator delete(*((void **)this + 997));
  *((_DWORD *)this + 997) = 0;
  *((_DWORD *)this + 998) = 0;
  *((_DWORD *)this + 999) = 0;
  if ( *((_DWORD *)this + 993) )
    operator delete(*((void **)this + 993));
  *((_DWORD *)this + 993) = 0;
  *((_DWORD *)this + 994) = 0;
  *((_DWORD *)this + 995) = 0;
  if ( *((_DWORD *)this + 989) )
    operator delete(*((void **)this + 989));
  *((_DWORD *)this + 989) = 0;
  *((_DWORD *)this + 990) = 0;
  *((_DWORD *)this + 991) = 0;
  if ( *((_DWORD *)this + 985) )
    operator delete(*((void **)this + 985));
  *((_DWORD *)this + 985) = 0;
  *((_DWORD *)this + 986) = 0;
  *((_DWORD *)this + 987) = 0;
  if ( *((_DWORD *)this + 981) )
    operator delete(*((void **)this + 981));
  *((_DWORD *)this + 981) = 0;
  *((_DWORD *)this + 982) = 0;
  *((_DWORD *)this + 983) = 0;
  if ( *((_DWORD *)this + 977) )
    operator delete(*((void **)this + 977));
  *((_DWORD *)this + 977) = 0;
  *((_DWORD *)this + 978) = 0;
  *((_DWORD *)this + 979) = 0;
  if ( *((_DWORD *)this + 973) )
    operator delete(*((void **)this + 973));
  *((_DWORD *)this + 973) = 0;
  *((_DWORD *)this + 974) = 0;
  *((_DWORD *)this + 975) = 0;
  if ( *((_DWORD *)this + 969) )
    operator delete(*((void **)this + 969));
  *((_DWORD *)this + 969) = 0;
  *((_DWORD *)this + 970) = 0;
  *((_DWORD *)this + 971) = 0;
  CTYDialog::~CTYDialog(this);
}
