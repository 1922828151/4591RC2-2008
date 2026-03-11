/*
 * func-name: ??1CBattleFieldDetailUI@@UAE@XZ_0
 * func-address: 0x10254fd0
 * callers: 0x1000fc36
 * callees: 0x1000f24f, 0x102c9d50
 */

void __thiscall CBattleFieldDetailUI::~CBattleFieldDetailUI(CBattleFieldDetailUI *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  EventAttemper *v4; // eax

  *(_DWORD *)this = &CBattleFieldDetailUI::`vftable';
  v2 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 998), 1);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 999), 1);
  EventAttemper::RemoveObserver(v3);
  v4 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 1000), 1);
  EventAttemper::RemoveObserver(v4);
  if ( *((_DWORD *)this + 995) )
    operator delete(*((void **)this + 995));
  *((_DWORD *)this + 995) = 0;
  *((_DWORD *)this + 996) = 0;
  *((_DWORD *)this + 997) = 0;
  if ( *((_DWORD *)this + 989) )
    operator delete(*((void **)this + 989));
  *((_DWORD *)this + 989) = 0;
  *((_DWORD *)this + 990) = 0;
  *((_DWORD *)this + 991) = 0;
  sub_1000F24F();
  CTYDialog::~CTYDialog(this);
}
