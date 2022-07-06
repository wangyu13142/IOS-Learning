### 按顺序打印出 App、ViewController 生命周期的各个事件。

#### APP：

| 状态              | 描述                                                         |
| ----------------- | ------------------------------------------------------------ |
| Not running不运行 | App没有启动，或者曾经运行过，但被系统杀死                    |
| Inactive不活跃    | App在前台运行但是此时却收不到事件。（尽管它可能在执行其他的代码。）app 通常仅仅在过渡到另一个不同状态时才会有inactive状态。 |
| Active            | App在前台运行并且接收事件。这是前台app的普通模式             |
| Background        | App在后台并且执行代码。大部分app进入到这个状态时，马上要被挂起 suspended.然而一个需要额外运行事件的app可以保持在这一状态一定的时间。另外，一个app直接在 background 状态启动时，不会进入inactive状态而是直接进入background状态。跟多信息请参阅 [Background Execution](https://developer.apple.com/library/content/documentation/iPhone/Conceptual/iPhoneOSProgrammingGuide/BackgroundExecution/BackgroundExecution.html#//apple_ref/doc/uid/TP40007072-CH4-SW1). |
| Suspended         | App在后台但是不执行代码。系统将自动的使app 进入这一状态，并且是在用户不知情的情况下。当被挂起，app保留了内存但是不执行任何代码。当低内存情况发生，系统将清除挂起的app为前台app留出足够大的内存。 |

#### ViewController：

1. alloc/init View
2. loadView
3. viewDidLoad
4. viewWillAppear
5. viewDidAppear
6. viewWillDisappear
7. viewDidDisappear
8. dealloc

### 写出五种常用的 UI 控件

UIScrollView、UITableView、UICollectionView、UIWebView **&** WKWebView、UINavigationBar

### 列举出三个 UITableViewDelegate 声明的方法

1.

```objective-c
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
```

2.

```objective-c
- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section; 
```

3.

```objective-c
- (UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section;
```

