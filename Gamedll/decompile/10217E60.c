/*
 * func-name: sub_10217E60
 * func-address: 0x10217e60
 * callers: 0x10006e56
 * callees: 0x1001933f
 */

char __thiscall sub_10217E60(_DWORD *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  EventAttemper *v4; // eax
  CDlgMgr *v5; // eax
  int v6; // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  void (__thiscall ***v8)(_DWORD, int); // ecx

  v2 = (EventAttemper *)EventAttemper::Instance(this[17], 1);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(this[18], 1);
  EventAttemper::RemoveObserver(v3);
  v4 = (EventAttemper *)EventAttemper::Instance(this[19], 1);
  EventAttemper::RemoveObserver(v4);
  v5 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::RemoveDialog(v5);
  v6 = this[24];
  if ( v6 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  v7 = (void (__thiscall ***)(_DWORD, int))this[24];
  if ( v7 )
  {
    (**v7)(v7, 1);
    this[24] = 0;
  }
  sub_1001933F(-1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_103B665C + 4) + 8))(*(_DWORD *)(dword_103B665C + 4));
  v8 = *(void (__thiscall ****)(_DWORD, int))(dword_103B665C + 4);
  if ( v8 )
    (**v8)(v8, 1);
  *(_DWORD *)(dword_103B665C + 4) = 0;
  return 1;
}
