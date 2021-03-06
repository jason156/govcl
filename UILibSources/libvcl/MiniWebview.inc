
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function MiniWebview_Create(AOwner: TComponent): TMiniWebview; stdcall;
begin
  Result :=  TMiniWebview.Create(AOwner);
end;

procedure MiniWebview_Free(AObj: TMiniWebview); stdcall;
begin
  AObj.Free;
end;

procedure MiniWebview_Navigate(AObj: TMiniWebview; AURL: PChar); stdcall;
begin
  AObj.Navigate(AURL);
end;

procedure MiniWebview_GoBack(AObj: TMiniWebview); stdcall;
begin
  AObj.GoBack;
end;

procedure MiniWebview_GoForward(AObj: TMiniWebview); stdcall;
begin
  AObj.GoForward;
end;

procedure MiniWebview_GoHome(AObj: TMiniWebview); stdcall;
begin
  AObj.GoHome;
end;

procedure MiniWebview_GoSearch(AObj: TMiniWebview); stdcall;
begin
  AObj.GoSearch;
end;

procedure MiniWebview_Refresh(AObj: TMiniWebview); stdcall;
begin
  AObj.Refresh;
end;

procedure MiniWebview_Stop(AObj: TMiniWebview); stdcall;
begin
  AObj.Stop;
end;

procedure MiniWebview_SetBounds(AObj: TMiniWebview; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); stdcall;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure MiniWebview_ExecuteScript(AObj: TMiniWebview; AScriptText: PChar; AScriptType: PChar); stdcall;
begin
  AObj.ExecuteScript(AScriptText, AScriptType);
end;

procedure MiniWebview_ExecuteJS(AObj: TMiniWebview; AScriptText: PChar); stdcall;
begin
  AObj.ExecuteJS(AScriptText);
end;

procedure MiniWebview_LoadHTML(AObj: TMiniWebview; AStr: PChar); stdcall;
begin
  AObj.LoadHTML(AStr);
end;

function MiniWebview_CanFocus(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.CanFocus;
end;

function MiniWebview_ContainsControl(AObj: TMiniWebview; Control: TControl): LongBool; stdcall;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function MiniWebview_ControlAtPos(AObj: TMiniWebview; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool; AllLevels: LongBool): TControl; stdcall;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls, AllLevels);
end;

procedure MiniWebview_DisableAlign(AObj: TMiniWebview); stdcall;
begin
  AObj.DisableAlign;
end;

procedure MiniWebview_EnableAlign(AObj: TMiniWebview); stdcall;
begin
  AObj.EnableAlign;
end;

function MiniWebview_FindChildControl(AObj: TMiniWebview; ControlName: PChar): TControl; stdcall;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure MiniWebview_FlipChildren(AObj: TMiniWebview; AllLevels: LongBool); stdcall;
begin
  AObj.FlipChildren(AllLevels);
end;

function MiniWebview_Focused(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.Focused;
end;

function MiniWebview_HandleAllocated(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure MiniWebview_InsertControl(AObj: TMiniWebview; AControl: TControl); stdcall;
begin
  AObj.InsertControl(AControl);
end;

procedure MiniWebview_Invalidate(AObj: TMiniWebview); stdcall;
begin
  AObj.Invalidate;
end;

procedure MiniWebview_PaintTo(AObj: TMiniWebview; DC: HDC; X: Integer; Y: Integer); stdcall;
begin
  AObj.PaintTo(DC, X, Y);
end;

procedure MiniWebview_RemoveControl(AObj: TMiniWebview; AControl: TControl); stdcall;
begin
  AObj.RemoveControl(AControl);
end;

procedure MiniWebview_Realign(AObj: TMiniWebview); stdcall;
begin
  AObj.Realign;
end;

procedure MiniWebview_Repaint(AObj: TMiniWebview); stdcall;
begin
  AObj.Repaint;
end;

procedure MiniWebview_ScaleBy(AObj: TMiniWebview; M: Integer; D: Integer); stdcall;
begin
  AObj.ScaleBy(M, D);
end;

procedure MiniWebview_ScrollBy(AObj: TMiniWebview; DeltaX: Integer; DeltaY: Integer); stdcall;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure MiniWebview_SetFocus(AObj: TMiniWebview); stdcall;
begin
  AObj.SetFocus;
end;

procedure MiniWebview_Update(AObj: TMiniWebview); stdcall;
begin
  AObj.Update;
end;

procedure MiniWebview_UpdateControlState(AObj: TMiniWebview); stdcall;
begin
  AObj.UpdateControlState;
end;

procedure MiniWebview_BringToFront(AObj: TMiniWebview); stdcall;
begin
  AObj.BringToFront;
end;

procedure MiniWebview_ClientToScreen(AObj: TMiniWebview; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure MiniWebview_ClientToParent(AObj: TMiniWebview; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function MiniWebview_Dragging(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.Dragging;
end;

function MiniWebview_HasParent(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure MiniWebview_Hide(AObj: TMiniWebview); stdcall;
begin
  AObj.Hide;
end;

function MiniWebview_Perform(AObj: TMiniWebview; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; stdcall;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure MiniWebview_ScreenToClient(AObj: TMiniWebview; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure MiniWebview_ParentToClient(AObj: TMiniWebview; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure MiniWebview_SendToBack(AObj: TMiniWebview); stdcall;
begin
  AObj.SendToBack;
end;

procedure MiniWebview_Show(AObj: TMiniWebview); stdcall;
begin
  AObj.Show;
end;

function MiniWebview_GetTextBuf(AObj: TMiniWebview; Buffer: PWideChar; BufSize: Integer): Integer; stdcall;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function MiniWebview_GetTextLen(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.GetTextLen;
end;

procedure MiniWebview_SetTextBuf(AObj: TMiniWebview; Buffer: PWideChar); stdcall;
begin
  AObj.SetTextBuf(Buffer);
end;

function MiniWebview_FindComponent(AObj: TMiniWebview; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function MiniWebview_GetNamePath(AObj: TMiniWebview): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure MiniWebview_Assign(AObj: TMiniWebview; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure MiniWebview_DisposeOf(AObj: TMiniWebview); stdcall;
begin
  AObj.DisposeOf;
end;

function MiniWebview_ClassType(AObj: TMiniWebview): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function MiniWebview_ClassName(AObj: TMiniWebview): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function MiniWebview_InstanceSize(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function MiniWebview_InheritsFrom(AObj: TMiniWebview; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function MiniWebview_Equals(AObj: TMiniWebview; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function MiniWebview_GetHashCode(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function MiniWebview_ToString(AObj: TMiniWebview): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function MiniWebview_GetReadyState(AObj: TMiniWebview): TReadyState; stdcall;
begin
  Result :=  AObj.ReadyState;
end;

procedure MiniWebview_SetOnTitleChange(AObj: TMiniWebview; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnTitleChange := nil;
    TEventClass.Remove(AObj, @TEventClass.OnTitleChange);
    Exit;
  end;
  AObj.OnTitleChange := TEventClass.OnTitleChange;
  TEventClass.Add(AObj, @TEventClass.OnTitleChange, AEventId);
end;

procedure MiniWebview_SetOnJSExternal(AObj: TMiniWebview; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnJSExternal := nil;
    TEventClass.Remove(AObj, @TEventClass.OnJSExternal);
    Exit;
  end;
  AObj.OnJSExternal := TEventClass.OnJSExternal;
  TEventClass.Add(AObj, @TEventClass.OnJSExternal, AEventId);
end;

function MiniWebview_GetDockClientCount(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.DockClientCount;
end;

function MiniWebview_GetDockSite(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.DockSite;
end;

procedure MiniWebview_SetDockSite(AObj: TMiniWebview; AValue: LongBool); stdcall;
begin
  AObj.DockSite := AValue;
end;

function MiniWebview_GetDoubleBuffered(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure MiniWebview_SetDoubleBuffered(AObj: TMiniWebview; AValue: LongBool); stdcall;
begin
  AObj.DoubleBuffered := AValue;
end;

function MiniWebview_GetAlignDisabled(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.AlignDisabled;
end;

function MiniWebview_GetMouseInClient(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.MouseInClient;
end;

function MiniWebview_GetVisibleDockClientCount(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function MiniWebview_GetBrush(AObj: TMiniWebview): TBrush; stdcall;
begin
  Result :=  AObj.Brush;
end;

function MiniWebview_GetControlCount(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.ControlCount;
end;

function MiniWebview_GetHandle(AObj: TMiniWebview): HWND; stdcall;
begin
  Result :=  AObj.Handle;
end;

function MiniWebview_GetParentDoubleBuffered(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure MiniWebview_SetParentDoubleBuffered(AObj: TMiniWebview; AValue: LongBool); stdcall;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function MiniWebview_GetParentWindow(AObj: TMiniWebview): HWND; stdcall;
begin
  Result :=  AObj.ParentWindow;
end;

procedure MiniWebview_SetParentWindow(AObj: TMiniWebview; AValue: HWND); stdcall;
begin
  AObj.ParentWindow := AValue;
end;

function MiniWebview_GetTabOrder(AObj: TMiniWebview): TTabOrder; stdcall;
begin
  Result :=  AObj.TabOrder;
end;

procedure MiniWebview_SetTabOrder(AObj: TMiniWebview; AValue: TTabOrder); stdcall;
begin
  AObj.TabOrder := AValue;
end;

function MiniWebview_GetTabStop(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.TabStop;
end;

procedure MiniWebview_SetTabStop(AObj: TMiniWebview; AValue: LongBool); stdcall;
begin
  AObj.TabStop := AValue;
end;

function MiniWebview_GetUseDockManager(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.UseDockManager;
end;

procedure MiniWebview_SetUseDockManager(AObj: TMiniWebview; AValue: LongBool); stdcall;
begin
  AObj.UseDockManager := AValue;
end;

function MiniWebview_GetEnabled(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.Enabled;
end;

procedure MiniWebview_SetEnabled(AObj: TMiniWebview; AValue: LongBool); stdcall;
begin
  AObj.Enabled := AValue;
end;

function MiniWebview_GetAction(AObj: TMiniWebview): TBasicAction; stdcall;
begin
  Result :=  AObj.Action;
end;

procedure MiniWebview_SetAction(AObj: TMiniWebview; AValue: TBasicAction); stdcall;
begin
  AObj.Action := AValue;
end;

function MiniWebview_GetAlign(AObj: TMiniWebview): TAlign; stdcall;
begin
  Result :=  AObj.Align;
end;

procedure MiniWebview_SetAlign(AObj: TMiniWebview; AValue: TAlign); stdcall;
begin
  AObj.Align := AValue;
end;

function MiniWebview_GetAnchors(AObj: TMiniWebview): TAnchors; stdcall;
begin
  Result :=  AObj.Anchors;
end;

procedure MiniWebview_SetAnchors(AObj: TMiniWebview; AValue: TAnchors); stdcall;
begin
  AObj.Anchors := AValue;
end;

function MiniWebview_GetBiDiMode(AObj: TMiniWebview): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure MiniWebview_SetBiDiMode(AObj: TMiniWebview; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

procedure MiniWebview_GetBoundsRect(AObj: TMiniWebview; var Result: TRect); stdcall;
begin
  Result :=  AObj.BoundsRect;
end;

procedure MiniWebview_SetBoundsRect(AObj: TMiniWebview; var AValue: TRect); stdcall;
begin
  AObj.BoundsRect := AValue;
end;

function MiniWebview_GetClientHeight(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.ClientHeight;
end;

procedure MiniWebview_SetClientHeight(AObj: TMiniWebview; AValue: Integer); stdcall;
begin
  AObj.ClientHeight := AValue;
end;

procedure MiniWebview_GetClientOrigin(AObj: TMiniWebview; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure MiniWebview_GetClientRect(AObj: TMiniWebview; var Result: TRect); stdcall;
begin
  Result :=  AObj.ClientRect;
end;

function MiniWebview_GetClientWidth(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.ClientWidth;
end;

procedure MiniWebview_SetClientWidth(AObj: TMiniWebview; AValue: Integer); stdcall;
begin
  AObj.ClientWidth := AValue;
end;

function MiniWebview_GetConstraints(AObj: TMiniWebview): TSizeConstraints; stdcall;
begin
  Result :=  AObj.Constraints;
end;

procedure MiniWebview_SetConstraints(AObj: TMiniWebview; AValue: TSizeConstraints); stdcall;
begin
  AObj.Constraints := AValue;
end;

function MiniWebview_GetControlState(AObj: TMiniWebview): TControlState; stdcall;
begin
  Result :=  AObj.ControlState;
end;

procedure MiniWebview_SetControlState(AObj: TMiniWebview; AValue: TControlState); stdcall;
begin
  AObj.ControlState := AValue;
end;

function MiniWebview_GetControlStyle(AObj: TMiniWebview): TControlStyle; stdcall;
begin
  Result :=  AObj.ControlStyle;
end;

procedure MiniWebview_SetControlStyle(AObj: TMiniWebview; AValue: TControlStyle); stdcall;
begin
  AObj.ControlStyle := AValue;
end;

function MiniWebview_GetExplicitLeft(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.ExplicitLeft;
end;

function MiniWebview_GetExplicitTop(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.ExplicitTop;
end;

function MiniWebview_GetExplicitWidth(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.ExplicitWidth;
end;

function MiniWebview_GetExplicitHeight(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.ExplicitHeight;
end;

function MiniWebview_GetFloating(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.Floating;
end;

function MiniWebview_GetShowHint(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.ShowHint;
end;

procedure MiniWebview_SetShowHint(AObj: TMiniWebview; AValue: LongBool); stdcall;
begin
  AObj.ShowHint := AValue;
end;

function MiniWebview_GetVisible(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.Visible;
end;

procedure MiniWebview_SetVisible(AObj: TMiniWebview; AValue: LongBool); stdcall;
begin
  AObj.Visible := AValue;
end;

function MiniWebview_GetParent(AObj: TMiniWebview): TWinControl; stdcall;
begin
  Result :=  AObj.Parent;
end;

procedure MiniWebview_SetParent(AObj: TMiniWebview; AValue: TWinControl); stdcall;
begin
  AObj.Parent := AValue;
end;

function MiniWebview_GetStyleElements(AObj: TMiniWebview): TStyleElements; stdcall;
begin
  Result :=  AObj.StyleElements;
end;

procedure MiniWebview_SetStyleElements(AObj: TMiniWebview; AValue: TStyleElements); stdcall;
begin
  AObj.StyleElements := AValue;
end;

procedure MiniWebview_SetOnGesture(AObj: TMiniWebview; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnGesture := nil;
    TEventClass.Remove(AObj, @TEventClass.OnGesture);
    Exit;
  end;
  AObj.OnGesture := TEventClass.OnGesture;
  TEventClass.Add(AObj, @TEventClass.OnGesture, AEventId);
end;

function MiniWebview_GetAlignWithMargins(AObj: TMiniWebview): LongBool; stdcall;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure MiniWebview_SetAlignWithMargins(AObj: TMiniWebview; AValue: LongBool); stdcall;
begin
  AObj.AlignWithMargins := AValue;
end;

function MiniWebview_GetLeft(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure MiniWebview_SetLeft(AObj: TMiniWebview; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

function MiniWebview_GetTop(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure MiniWebview_SetTop(AObj: TMiniWebview; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function MiniWebview_GetWidth(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure MiniWebview_SetWidth(AObj: TMiniWebview; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function MiniWebview_GetHeight(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.Height;
end;

procedure MiniWebview_SetHeight(AObj: TMiniWebview; AValue: Integer); stdcall;
begin
  AObj.Height := AValue;
end;

function MiniWebview_GetCursor(AObj: TMiniWebview): TCursor; stdcall;
begin
  Result :=  AObj.Cursor;
end;

procedure MiniWebview_SetCursor(AObj: TMiniWebview; AValue: TCursor); stdcall;
begin
  AObj.Cursor := AValue;
end;

function MiniWebview_GetHint(AObj: TMiniWebview): PChar; stdcall;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure MiniWebview_SetHint(AObj: TMiniWebview; AValue: PChar); stdcall;
begin
  AObj.Hint := AValue;
end;

function MiniWebview_GetMargins(AObj: TMiniWebview): TMargins; stdcall;
begin
  Result :=  AObj.Margins;
end;

procedure MiniWebview_SetMargins(AObj: TMiniWebview; AValue: TMargins); stdcall;
begin
  AObj.Margins := AValue;
end;

function MiniWebview_GetCustomHint(AObj: TMiniWebview): TCustomHint; stdcall;
begin
  Result :=  AObj.CustomHint;
end;

procedure MiniWebview_SetCustomHint(AObj: TMiniWebview; AValue: TCustomHint); stdcall;
begin
  AObj.CustomHint := AValue;
end;

function MiniWebview_GetComponentCount(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function MiniWebview_GetComponentIndex(AObj: TMiniWebview): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure MiniWebview_SetComponentIndex(AObj: TMiniWebview; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function MiniWebview_GetOwner(AObj: TMiniWebview): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function MiniWebview_GetName(AObj: TMiniWebview): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure MiniWebview_SetName(AObj: TMiniWebview; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function MiniWebview_GetTag(AObj: TMiniWebview): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure MiniWebview_SetTag(AObj: TMiniWebview; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function MiniWebview_GetDockClients(AObj: TMiniWebview; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.DockClients[Index];
end;

function MiniWebview_GetControls(AObj: TMiniWebview; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.Controls[Index];
end;

function MiniWebview_GetComponents(AObj: TMiniWebview; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function MiniWebview_StaticClassType: TClass; stdcall;
begin
  Result := TMiniWebview;
end;

exports
  MiniWebview_Create,
  MiniWebview_Free,
  MiniWebview_Navigate,
  MiniWebview_GoBack,
  MiniWebview_GoForward,
  MiniWebview_GoHome,
  MiniWebview_GoSearch,
  MiniWebview_Refresh,
  MiniWebview_Stop,
  MiniWebview_SetBounds,
  MiniWebview_ExecuteScript,
  MiniWebview_ExecuteJS,
  MiniWebview_LoadHTML,
  MiniWebview_CanFocus,
  MiniWebview_ContainsControl,
  MiniWebview_ControlAtPos,
  MiniWebview_DisableAlign,
  MiniWebview_EnableAlign,
  MiniWebview_FindChildControl,
  MiniWebview_FlipChildren,
  MiniWebview_Focused,
  MiniWebview_HandleAllocated,
  MiniWebview_InsertControl,
  MiniWebview_Invalidate,
  MiniWebview_PaintTo,
  MiniWebview_RemoveControl,
  MiniWebview_Realign,
  MiniWebview_Repaint,
  MiniWebview_ScaleBy,
  MiniWebview_ScrollBy,
  MiniWebview_SetFocus,
  MiniWebview_Update,
  MiniWebview_UpdateControlState,
  MiniWebview_BringToFront,
  MiniWebview_ClientToScreen,
  MiniWebview_ClientToParent,
  MiniWebview_Dragging,
  MiniWebview_HasParent,
  MiniWebview_Hide,
  MiniWebview_Perform,
  MiniWebview_ScreenToClient,
  MiniWebview_ParentToClient,
  MiniWebview_SendToBack,
  MiniWebview_Show,
  MiniWebview_GetTextBuf,
  MiniWebview_GetTextLen,
  MiniWebview_SetTextBuf,
  MiniWebview_FindComponent,
  MiniWebview_GetNamePath,
  MiniWebview_Assign,
  MiniWebview_DisposeOf,
  MiniWebview_ClassType,
  MiniWebview_ClassName,
  MiniWebview_InstanceSize,
  MiniWebview_InheritsFrom,
  MiniWebview_Equals,
  MiniWebview_GetHashCode,
  MiniWebview_ToString,
  MiniWebview_GetReadyState,
  MiniWebview_SetOnTitleChange,
  MiniWebview_SetOnJSExternal,
  MiniWebview_GetDockClientCount,
  MiniWebview_GetDockSite,
  MiniWebview_SetDockSite,
  MiniWebview_GetDoubleBuffered,
  MiniWebview_SetDoubleBuffered,
  MiniWebview_GetAlignDisabled,
  MiniWebview_GetMouseInClient,
  MiniWebview_GetVisibleDockClientCount,
  MiniWebview_GetBrush,
  MiniWebview_GetControlCount,
  MiniWebview_GetHandle,
  MiniWebview_GetParentDoubleBuffered,
  MiniWebview_SetParentDoubleBuffered,
  MiniWebview_GetParentWindow,
  MiniWebview_SetParentWindow,
  MiniWebview_GetTabOrder,
  MiniWebview_SetTabOrder,
  MiniWebview_GetTabStop,
  MiniWebview_SetTabStop,
  MiniWebview_GetUseDockManager,
  MiniWebview_SetUseDockManager,
  MiniWebview_GetEnabled,
  MiniWebview_SetEnabled,
  MiniWebview_GetAction,
  MiniWebview_SetAction,
  MiniWebview_GetAlign,
  MiniWebview_SetAlign,
  MiniWebview_GetAnchors,
  MiniWebview_SetAnchors,
  MiniWebview_GetBiDiMode,
  MiniWebview_SetBiDiMode,
  MiniWebview_GetBoundsRect,
  MiniWebview_SetBoundsRect,
  MiniWebview_GetClientHeight,
  MiniWebview_SetClientHeight,
  MiniWebview_GetClientOrigin,
  MiniWebview_GetClientRect,
  MiniWebview_GetClientWidth,
  MiniWebview_SetClientWidth,
  MiniWebview_GetConstraints,
  MiniWebview_SetConstraints,
  MiniWebview_GetControlState,
  MiniWebview_SetControlState,
  MiniWebview_GetControlStyle,
  MiniWebview_SetControlStyle,
  MiniWebview_GetExplicitLeft,
  MiniWebview_GetExplicitTop,
  MiniWebview_GetExplicitWidth,
  MiniWebview_GetExplicitHeight,
  MiniWebview_GetFloating,
  MiniWebview_GetShowHint,
  MiniWebview_SetShowHint,
  MiniWebview_GetVisible,
  MiniWebview_SetVisible,
  MiniWebview_GetParent,
  MiniWebview_SetParent,
  MiniWebview_GetStyleElements,
  MiniWebview_SetStyleElements,
  MiniWebview_SetOnGesture,
  MiniWebview_GetAlignWithMargins,
  MiniWebview_SetAlignWithMargins,
  MiniWebview_GetLeft,
  MiniWebview_SetLeft,
  MiniWebview_GetTop,
  MiniWebview_SetTop,
  MiniWebview_GetWidth,
  MiniWebview_SetWidth,
  MiniWebview_GetHeight,
  MiniWebview_SetHeight,
  MiniWebview_GetCursor,
  MiniWebview_SetCursor,
  MiniWebview_GetHint,
  MiniWebview_SetHint,
  MiniWebview_GetMargins,
  MiniWebview_SetMargins,
  MiniWebview_GetCustomHint,
  MiniWebview_SetCustomHint,
  MiniWebview_GetComponentCount,
  MiniWebview_GetComponentIndex,
  MiniWebview_SetComponentIndex,
  MiniWebview_GetOwner,
  MiniWebview_GetName,
  MiniWebview_SetName,
  MiniWebview_GetTag,
  MiniWebview_SetTag,
  MiniWebview_GetDockClients,
  MiniWebview_GetControls,
  MiniWebview_GetComponents,
  MiniWebview_StaticClassType;

