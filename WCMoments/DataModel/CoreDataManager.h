//
//  CoreDataManager.h
//  WCMoments
//
//  Created by QianKun on 10/9/16.
//  Copyright © 2016 QianKun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class User;

@interface CoreDataManager : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSURL *applicationDocumentsDirectory;

+ (id)sharedDataManager;

- (void)saveContext;
- (id)createEntityWithName:(NSString *)entityName;
- (User *)getUserByUserName:(NSString *)username;
- (BOOL)usernameExist:(NSString *)username;

@end