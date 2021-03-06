#import "DBScrollView.h"

@implementation DBScrollView

- (id)init
{
    self = [super init];
    if (self) {
        self.delegate = self;
    }
    return self;
}

- (void)scrollViewDidScroll:(UIScrollView *)scrollView{
    if(self.actions)
        [DBActionParser parseActionArray:self.actions];
}

@end
